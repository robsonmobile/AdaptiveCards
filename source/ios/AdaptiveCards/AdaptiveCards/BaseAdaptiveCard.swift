//
//  Copyright © 2017 Microsoft. All rights reserved.
//

import Foundation

public class BaseCardElement {
    private var swigCPtr : Int64
    private var swigCMemOwn : Bool
    
    
    init(ptr: Int64, memOwn: Bool) {
        swigCPtr = ptr
        swigCMemOwn = memOwn
    }
    
    deinit {
        if (swigCPtr != 0) {
            if (swigCMemOwn) {
                swigCMemOwn = false
                AdaptiveCardObjectModel_delete_BaseCardElement(swigCPtr)
            }
            swigCPtr = 0;
        }
    }
    
    public func GetSeparationStyle() -> SeparationStyle {
        return SeparationStyle(rawValue: AdaptiveCardObjectModel_BaseCardElement_GetSeparationStyle(swigCPtr))!
    }
    
    public func SetSeparationStyle(separationStyle: SeparationStyle) {
        AdaptiveCardObjectModel_BaseCardElement_SetSeparationStyle(swigCPtr, separationStyle.rawValue)
    }
    
    public func GetSpeak() -> String {
        return String(AdaptiveCardObjectModel_BaseCardElement_GetSpeak(swigCPtr))
    }
    
    public func SetSpeak(speak: String) {
        AdaptiveCardObjectModel_BaseCardElement_SetSpeak(swigCPtr, speak)
    }
    
    public func GetElementType() -> CardElementType {
        return CardElementType(rawValue: AdaptiveCardObjectModel_BaseCardElement_GetElementType(swigCPtr))!
        //return CardElementType(rawValue: 0)!
    }
    
    public func Serialize() -> String {
        //return ""
        return String(AdaptiveCardObjectModel_BaseCardElement_Serialize(swigCPtr))
    }
    
    internal static func getCPtr(baseCardElement: BaseCardElement) -> Int64 {
        return baseCardElement.swigCPtr;
    }
}
