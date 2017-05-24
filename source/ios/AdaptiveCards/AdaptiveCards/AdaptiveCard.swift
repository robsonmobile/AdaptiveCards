//
//  Copyright © 2017 Microsoft. All rights reserved.
//

import Foundation

extension String
{
    init( _ cs : swiftpp_StringWrapper )
    {
        var cs = cs
        self.init(cString:swiftpp_StringWrapperUTF8(&cs))
        swiftpp_StringWrapper_destroy(cs)
    }
}

public class AdaptiveCard {
    private var swigCPtr : Int64
    private var swigCMemOwn : Bool
    
    internal init(cPtr: Int64, memOwn: Bool)
    {
        self.swigCPtr = cPtr
        self.swigCMemOwn = true
    }
    
    deinit {
        if (swigCPtr != 0) {
            if (swigCMemOwn) {
                swigCMemOwn = false
                AdaptiveCardObjectModel_delete_AdaptiveCard(swigCPtr)
            }
            swigCPtr = 0;
        }
    }
    
    public init()
    {
        self.swigCPtr = AdaptiveCardObjectModel_new_1AdaptiveCard__1SWIG_10()
        self.swigCMemOwn = true
    }
    
    public init(version: String, minVersion: String, fallbackText: String, backgroundImageUrl: String) {
        self.swigCPtr = AdaptiveCardObjectModel_new_1AdaptiveCard__1SWIG_11(version, minVersion, fallbackText, backgroundImageUrl)
        self.swigCMemOwn = true
    }
    
    // What is the last param in this init!!!??????
    /*public init(version: String, minVersion: String, fallbackText: String, backgroundImageUrl: String, body: BaseCardElementVector, SWIGTYPE_p_std__vectorT_std__shared_ptrT_AdaptiveCards__BaseActionElement_t_t actions) {
    this(AdaptiveCardObjectModel_new_AdaptiveCard__SWIG_2(version, minVersion, fallbackText, backgroundImageUrl, BaseCardElementVector.getCPtr(body), body, SWIGTYPE_p_std__vectorT_std__shared_ptrT_AdaptiveCards__BaseActionElement_t_t.getCPtr(actions)), true);
    }*/
    
    public func GetVersion() -> String {
        return String(AdaptiveCardObjectModel_AdaptiveCard_GetVersion(swigCPtr))
    }
    
    public func SetVersion(version: String) {
        AdaptiveCardObjectModel_AdaptiveCard_SetVersion(swigCPtr, version);
    }
    
    public func GetMinVersion() -> String {
        return String(AdaptiveCardObjectModel_AdaptiveCard_GetMinVersion(swigCPtr));
    }
    
    public func SetMinVersion(value: String) {
        AdaptiveCardObjectModel_AdaptiveCard_SetMinVersion(swigCPtr, value);
    }
    
    public func GetFallbackText() -> String {
        return String(AdaptiveCardObjectModel_AdaptiveCard_GetFallbackText(swigCPtr));
    }
    
    public func SetFallbackText(fallbackText: String) {
        AdaptiveCardObjectModel_AdaptiveCard_SetFallbackText(swigCPtr, fallbackText);
    }
    
    public func GetBackgroundImageUrl() -> String{
        return String(AdaptiveCardObjectModel_AdaptiveCard_GetBackgroundImageUrl(swigCPtr));
    }
    
    public func SetBackgroundImageUrl(backgroundImageUrl: String) {
        AdaptiveCardObjectModel_AdaptiveCard_SetBackgroundImageUrl(swigCPtr, backgroundImageUrl);
    }
    
    public func GetBody() -> BaseCardElementVector{
        return BaseCardElementVector(cPtr: AdaptiveCardObjectModel_AdaptiveCard_GetBody_1_1SWIG_10(swigCPtr), memOwn: false);
    }
    
    public func GetElementType() -> CardElementType{
        return CardElementType(rawValue: AdaptiveCardObjectModel_AdaptiveCard_GetElementType(swigCPtr))!;
    }
    
    public static func DeserializeFromFile(jsonFile: String) -> AdaptiveCard? {
        let cPtr = AdaptiveCardObjectModel_AdaptiveCard_DeserializeFromFile(jsonFile);
        return (cPtr == 0) ? nil : AdaptiveCard(cPtr: cPtr, memOwn: true);
    }
    
    public static func DeserializeFromString(jsonString: String) -> AdaptiveCard? {
        let cPtr = AdaptiveCardObjectModel_AdaptiveCard_DeserializeFromString(jsonString);
        return (cPtr == 0) ? nil : AdaptiveCard(cPtr: cPtr, memOwn: true);
    }
}

