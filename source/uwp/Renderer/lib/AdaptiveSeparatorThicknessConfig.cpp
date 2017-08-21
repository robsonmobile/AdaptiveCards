#include "pch.h"
#include "AdaptiveSeparatorThicknessConfig.h"

using namespace Microsoft::WRL;
using namespace ABI::AdaptiveCards::XamlCardRenderer;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveSeparatorThicknessConfig::RuntimeClassInitialize() noexcept try
    {
        return S_OK;
    } CATCH_RETURN;


    HRESULT AdaptiveSeparatorThicknessConfig::RuntimeClassInitialize(SeparatorThicknessConfig SeparatorThicknessConfig) noexcept
    {
        m_sharedSeparatorThicknessConfig = SeparatorThicknessConfig;
        return S_OK;
    }

    _Use_decl_annotations_
        HRESULT AdaptiveSeparatorThicknessConfig::get_Default(UINT32* smallSeparatorThickness)
    {
        *smallSeparatorThickness = m_sharedSeparatorThicknessConfig.default;
        return S_OK;
    }

    _Use_decl_annotations_
        HRESULT AdaptiveSeparatorThicknessConfig::put_Default(UINT32 smallSeparatorThickness)
    {
        m_sharedSeparatorThicknessConfig.default = smallSeparatorThickness;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSeparatorThicknessConfig::get_Thick(UINT32* thickSeparatorThickness)
    {
        *thickSeparatorThickness = m_sharedSeparatorThicknessConfig.thick;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSeparatorThicknessConfig::put_Thick(UINT32 thickSeparatorThickness)
    {
        m_sharedSeparatorThicknessConfig.thick = thickSeparatorThickness;
        return S_OK;
    }
}
}
