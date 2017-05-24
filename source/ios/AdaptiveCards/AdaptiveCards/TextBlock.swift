//
//  TextBlock.swift
//  AdaptiveCards
//
//  Created by Esteban Chavez on 5/23/17.
//  Copyright © 2017 Microsoft. All rights reserved.
//

import Foundation

public class TextBlock : BaseCardElement {
    private var swigCPtr : Int64
    private var swigCMemOwn : Bool
    
    private init(cPtr: Int64, memOwn: Bool) {
        self.swigCPtr = cPtr
        self.swigCMemOwn = true
        super.init(ptr: AdaptiveCardObjectModel_TextBlock_SWIGSmartPtrUpcast(swigCPtr), memOwn: true)
    }
    
    public init() {
        self.swigCPtr = AdaptiveCardObjectModel_new_TextBlock_1_1SWIG_10()
        self.swigCMemOwn = true
        super.init(ptr: AdaptiveCardObjectModel_TextBlock_SWIGSmartPtrUpcast(swigCPtr), memOwn: true)
    }
    
    public init(separationStyle: SeparationStyle, speak: String, text: String, textSize: TextSize, textWeight: TextWeight, textColor: TextColor, isSubtle: Bool, wrap: Bool, maxLines: UInt, hAlignment: HorizontalAlignment) {
        self.swigCPtr = AdaptiveCardObjectModel_new_TextBlock_1_1SWIG_11(separationStyle.rawValue, speak, text, textSize.rawValue, textColor.rawValue, textColor.rawValue, isSubtle, wrap, Int32(maxLines), hAlignment.rawValue)
        self.swigCMemOwn = true
        super.init(ptr: AdaptiveCardObjectModel_TextBlock_SWIGSmartPtrUpcast(swigCPtr), memOwn: true)
    }
    
    deinit {
        if (swigCPtr != 0) {
            if (swigCMemOwn) {
                swigCMemOwn = false
                AdaptiveCardObjectModel_delete_TextBlock(swigCPtr)
            }
            swigCPtr = 0
        }
    }

    public static func DeserializeFromString(jsonString: String) -> TextBlock? {
        let cPtr = AdaptiveCardObjectModel_TextBlock_DeserializeFromString(jsonString)
        if(cPtr == 0) {
            return nil
        }
        else {
            return TextBlock(cPtr: cPtr, memOwn: true)
        }
    }
    
    public override func Serialize() -> String {
        return String(AdaptiveCardObjectModel_TextBlock_Serialize(swigCPtr))
    }
    
    public func GetText() -> String {
        return String(AdaptiveCardObjectModel_TextBlock_GetText(swigCPtr))
    }
    
    public func SetText(text: String) {
        AdaptiveCardObjectModel_TextBlock_SetText(swigCPtr, text)
    }
    
    public func GetTextSize() -> TextSize {
        return TextSize(rawValue:AdaptiveCardObjectModel_TextBlock_GetTextSize(swigCPtr))!
    }
    
    public func SetTextSize(textSize: TextSize) {
        AdaptiveCardObjectModel_TextBlock_SetTextSize(swigCPtr, textSize.rawValue)
    }
    
    public func GetTextWeight() -> TextWeight {
        return TextWeight(rawValue:AdaptiveCardObjectModel_TextBlock_GetTextWeight(swigCPtr))!
    }
    
    public func SetTextWeight(textWeight: TextWeight) {
        AdaptiveCardObjectModel_TextBlock_SetTextWeight(swigCPtr, textWeight.rawValue)
    }
    
    public func GetTextColor() -> TextColor {
        return TextColor(rawValue:AdaptiveCardObjectModel_TextBlock_GetTextColor(swigCPtr))!
    }
    
    public func SetTextColor(textColor: TextColor) {
        AdaptiveCardObjectModel_TextBlock_SetTextColor(swigCPtr, textColor.rawValue)
    }
    
    public func GetWrap() -> Bool {
        return AdaptiveCardObjectModel_TextBlock_GetWrap(swigCPtr)
    }
    
    public func SetWrap(wrap: Bool) {
        AdaptiveCardObjectModel_TextBlock_SetWrap(swigCPtr, wrap)
    }
    
    public func GetIsSubtle() -> Bool {
        return AdaptiveCardObjectModel_TextBlock_GetIsSubtle(swigCPtr)
    }
    
    public func SetIsSubtle(subtle: Bool) {
        AdaptiveCardObjectModel_TextBlock_SetIsSubtle(swigCPtr, subtle)
    }
    
    public func GetMaxLines() -> Int {
        return Int(AdaptiveCardObjectModel_TextBlock_GetMaxLines(swigCPtr))
    }
    
    public func SetMaxLines(maxLines: UInt) {
        AdaptiveCardObjectModel_TextBlock_SetMaxLines(swigCPtr, Int64(maxLines))
    }
    
    public func GetHorizontalAlignment() -> HorizontalAlignment{
        return HorizontalAlignment(rawValue:AdaptiveCardObjectModel_TextBlock_GetHorizontalAlignment(swigCPtr))!
    }
    
    public func SetHorizontalAlignment(hAlignment: HorizontalAlignment) {
        AdaptiveCardObjectModel_TextBlock_SetHorizontalAlignment(swigCPtr, hAlignment.rawValue)
    }
    
    public static func dynamic_cast(baseCardElement: BaseCardElement) -> TextBlock? {
        let cPtr = AdaptiveCardObjectModel_TextBlock_dynamic_cast(BaseCardElement.getCPtr(baseCardElement: baseCardElement))
        return (cPtr == 0) ? nil : TextBlock(cPtr: cPtr, memOwn: true)
    }
    
}
