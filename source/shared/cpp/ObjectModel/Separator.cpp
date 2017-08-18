#include "Separator.h"
#include "ParseUtil.h"

using namespace AdaptiveCards;

Separator::Separator()
{
}


std::shared_ptr<Separator> Separator::Deserialize(const Json::Value& json)
{
    std::shared_ptr<Separator> separator = std::make_shared<Separator>();

    separator->SetColor(ParseUtil::GetEnumValue<SeparatorColor>(json, AdaptiveCardSchemaKey::SeparatorColor, SeparatorColor::Default, SeparatorColorFromString));
    separator->SetThickness(ParseUtil::GetEnumValue<SeparatorThickness>(json, AdaptiveCardSchemaKey::SeparatorThickness, SeparatorThickness::Default, SeparatorThicknessFromString));

    return separator;
}

std::shared_ptr<Separator> Separator::DeserializeFromString(const std::string& jsonString)
{
    return Separator::Deserialize(ParseUtil::GetJsonValueFromString(jsonString));
}

std::string Separator::Serialize()
{
    Json::FastWriter writer;
    return writer.write(SerializeToJsonValue());
}

Json::Value Separator::SerializeToJsonValue()
{
    Json::Value root;
    root[AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::SeparatorColor)] = SeparatorColorToString(GetColor());
    root[AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::SeparatorThickness)] = SeparatorThicknessToString(GetThickness());

    return root;
}

SeparatorColor Separator::GetColor() const
{
    return m_color;
}

void Separator::SetColor(const SeparatorColor value)
{
    m_color = value;
}

SeparatorThickness Separator::GetThickness() const
{
    return m_thickness;
}

void Separator::SetThickness(const SeparatorThickness value)
{
    m_thickness = value;
}