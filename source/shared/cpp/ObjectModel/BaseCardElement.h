#pragma once

#include "pch.h"
#include "Enums.h"
#include "json/json.h"
#include "BaseActionElement.h"
#include "ParseUtil.h"
#include "Separator.h"

namespace AdaptiveCards
{
class Container;
class BaseCardElement
{
public:
    BaseCardElement(CardElementType type, Spacing spacing, std::shared_ptr<Separator> separator, std::string speak);
    BaseCardElement(CardElementType type);

    virtual ~BaseCardElement();

    std::shared_ptr<Separator> GetSeparator() const;
    void SetSeparator(const std::shared_ptr<Separator> value);

    Spacing GetSpacing() const;
    void SetSpacing(const Spacing value);

    std::string GetSpeak() const;
    void SetSpeak(const std::string value);

    const CardElementType GetElementType() const;

    virtual std::string Serialize() = 0;

    template <typename T>
    static std::shared_ptr<T> Deserialize(const Json::Value& json);

    virtual Json::Value SerializeToJsonValue();

protected:
    static std::shared_ptr<BaseActionElement> DeserializeSelectAction(const Json::Value& json, AdaptiveCardSchemaKey key);
    static Json::Value SerializeSelectAction(const std::shared_ptr<BaseActionElement> selectAction);

private:
    static const std::unordered_map<ActionType, std::function<std::shared_ptr<BaseActionElement>(const Json::Value&)>, EnumHash> ActionParsers;
    CardElementType m_type;
    Spacing m_spacing;
    std::shared_ptr<Separator> m_separator;
    std::string m_speak;
};

template <typename T>
std::shared_ptr<T> BaseCardElement::Deserialize(const Json::Value& json)
{
    std::shared_ptr<T> cardElement = std::make_shared<T>();
    std::shared_ptr<BaseCardElement> baseCardElement = cardElement;

    ParseUtil::ThrowIfNotJsonObject(json);

    baseCardElement->SetSpeak(ParseUtil::GetString(json, AdaptiveCardSchemaKey::Speak));
    baseCardElement->SetSpacing(
            ParseUtil::GetEnumValue<Spacing>(json, AdaptiveCardSchemaKey::Spacing, Spacing::Default, SpacingFromString)); 
  
    Json::Value separatorJson = json.get(AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Separator), Json::Value());
    if (!separatorJson.empty())
    {
        baseCardElement->SetSeparator(Separator::Deserialize(separatorJson));
    }

    /*
    auto propertyValue = json.get(AdaptiveCardSchemaKey::Separator, Json::Value());

    ParseUtil::GetElementCollection(json, AdaptiveCardSchemaKey::Separator, )

        */
    //BECKYTODO - Separator

    return cardElement;
}
}

