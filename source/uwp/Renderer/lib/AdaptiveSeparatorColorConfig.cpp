#include "pch.h"
#include "AdaptiveSeparatorColorConfig.h"

using namespace Microsoft::WRL;
using namespace ABI::AdaptiveCards::XamlCardRenderer;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveSeparatorColorConfig::RuntimeClassInitialize() noexcept try
    {
        return S_OK;
    } CATCH_RETURN;


    HRESULT AdaptiveSeparatorColorConfig::RuntimeClassInitialize(SeparatorColorConfig SeparatorColorConfig) noexcept
    {
        m_sharedSeparatorColorConfig = SeparatorColorConfig;
        return S_OK;
    }

    _Use_decl_annotations_
        HRESULT AdaptiveSeparatorColorConfig::get_Default(ABI::Windows::UI::Color* value)
    {
        return GetColorFromString(m_sharedSeparatorColorConfig.default, value);
    }

    _Use_decl_annotations_
        HRESULT AdaptiveSeparatorColorConfig::put_Default(ABI::Windows::UI::Color value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSeparatorColorConfig::get_Accent(ABI::Windows::UI::Color* value)
    {
        return GetColorFromString(m_sharedSeparatorColorConfig.accent, value);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSeparatorColorConfig::put_Accent(ABI::Windows::UI::Color value)
    {
        return E_NOTIMPL;
    }
}
}
