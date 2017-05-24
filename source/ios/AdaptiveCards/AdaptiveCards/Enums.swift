//
//  Copyright © 2017 Microsoft. All rights reserved.
//

import Foundation

public enum SeparationStyle: Int32 {
    case Default = 0,
    None,
    Strong
}

public enum CardElementType: Int32 {
    case Unsupported = 0,
    AdaptiveCard,
    TextBlock,
    Image,
    Container,
    Column,
    ColumnSet,
    FactSet,
    Fact,
    ActionGroup,
    ImageSet,
    InputDate,
    InputNumber,
    InputText,
    InputTime,
    InputToggle,
    InputChoiceSet
}

public enum TextSize: Int32 {
    case Small = 0,
    Normal,
    Medium,
    Large,
    ExtraLarge
}

public enum TextWeight: Int32 {
    case Lighter = 0,
    Normal,
    Bolder
}

public enum TextColor: Int32 {
    case Default = 0,
    Dark,
    Light,
    Accent,
    Good,
    Warning,
    Attention
}

public enum HorizontalAlignment: Int32 {
    case Left = 0,
    Center,
    Right
}
