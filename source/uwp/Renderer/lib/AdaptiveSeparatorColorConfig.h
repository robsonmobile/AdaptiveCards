#pragma once

#include "AdaptiveCards.XamlCardRenderer.h"
#include "Enums.h"
#include "HostConfig.h"

namespace AdaptiveCards { namespace XamlCardRenderer
{
    class AdaptiveSeparatorColorConfig :
        public Microsoft::WRL::RuntimeClass<
            Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
            ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveSeparatorColorConfig>
    {
        InspectableClass(RuntimeClass_AdaptiveCards_XamlCardRenderer_AdaptiveSeparatorColorConfig, BaseTrust)

    public:
        HRESULT RuntimeClassInitialize() noexcept;
        HRESULT RuntimeClassInitialize(SeparatorColorConfig SeparatorColorConfig) noexcept;

        IFACEMETHODIMP get_Default(_Out_ ABI::Windows::UI::Color* value);
        IFACEMETHODIMP put_Default(_In_ ABI::Windows::UI::Color value);

        IFACEMETHODIMP get_Accent(_Out_ ABI::Windows::UI::Color* value);
        IFACEMETHODIMP put_Accent(_In_ ABI::Windows::UI::Color value);

    private:
        SeparatorColorConfig m_sharedSeparatorColorConfig;
    };

    ActivatableClass(AdaptiveSeparatorColorConfig);
}}