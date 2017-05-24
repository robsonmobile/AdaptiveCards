//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifndef AdaptiveWrapper_h
#define AdaptiveWrapper_h

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
    
typedef struct
{
    char storage[24];
} swiftpp_StringWrapper;
swiftpp_StringWrapper swiftpp_StringWrapper_create(const char *s);
void swiftpp_StringWrapper_destroy(swiftpp_StringWrapper);
const char *swiftpp_StringWrapperUTF8(const swiftpp_StringWrapper * const);
    

//BaseCardElement
int AdaptiveCardObjectModel_BaseCardElement_GetSeparationStyle(int64_t jarg1);
void AdaptiveCardObjectModel_BaseCardElement_SetSeparationStyle(int64_t jarg1, int jarg2);
void AdaptiveCardObjectModel_delete_BaseCardElement(int64_t jarg1);
void AdaptiveCardObjectModel_BaseCardElement_SetSpeak(int64_t jarg1, const char* jarg2);
swiftpp_StringWrapper AdaptiveCardObjectModel_BaseCardElement_GetSpeak(int64_t jarg1);
int AdaptiveCardObjectModel_BaseCardElement_GetElementType(int64_t jarg1);
swiftpp_StringWrapper AdaptiveCardObjectModel_BaseCardElement_Serialize(int64_t jarg1);
    
//BaseCardElementVector
    void AdaptiveCardObjectModel_delete_BaseCardElementVector(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_new_BaseCardElementVector_1_1SWIG_10();
    int64_t AdaptiveCardObjectModel_new_BaseCardElementVector_1_1SWIG_11(int64_t jarg1) ;
    int64_t AdaptiveCardObjectModel_BaseCardElementVector_size(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_BaseCardElementVector_capacity(int64_t jarg1);
    void AdaptiveCardObjectModel_BaseCardElementVector_reserve(int64_t jarg1, int64_t jarg2);
    bool AdaptiveCardObjectModel_BaseCardElementVector_isEmpty(int64_t jarg1);
    void AdaptiveCardObjectModel_BaseCardElementVector_clear(int64_t jarg1);
    void AdaptiveCardObjectModel_BaseCardElementVector_add(int64_t jarg1, int64_t jarg2);
    int64_t AdaptiveCardObjectModel_BaseCardElementVector_get(int64_t jarg1, int jarg2) ;
    void AdaptiveCardObjectModel_BaseCardElementVector_set(int64_t jarg1, int jarg2, int64_t jarg3);
    
//TextBlock
    void AdaptiveCardObjectModel_delete_TextBlock(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_TextBlock_SWIGSmartPtrUpcast(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_new_TextBlock_1_1SWIG_10();
    int64_t AdaptiveCardObjectModel_new_TextBlock_1_1SWIG_11(int jarg1, const char* jarg2, const char* jarg3, int jarg4, int jarg5, int jarg6, bool jarg7, bool jarg8, int jarg9, int jarg10);
    int64_t AdaptiveCardObjectModel_TextBlock_Deserialize(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_TextBlock_DeserializeFromString(const char* jarg1);
    swiftpp_StringWrapper AdaptiveCardObjectModel_TextBlock_Serialize(int64_t jarg1);
    swiftpp_StringWrapper AdaptiveCardObjectModel_TextBlock_GetText(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetText(int64_t jarg1, const char* jarg2);
    int AdaptiveCardObjectModel_TextBlock_GetTextSize(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetTextSize(int64_t jarg1, int jarg2);
    int AdaptiveCardObjectModel_TextBlock_GetTextWeight(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetTextWeight(int64_t jarg1, int jarg2);
    int AdaptiveCardObjectModel_TextBlock_GetTextColor(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetTextColor(int64_t jarg1, int jarg2);
    bool AdaptiveCardObjectModel_TextBlock_GetWrap(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetWrap(int64_t jarg1, bool jarg2);
    bool AdaptiveCardObjectModel_TextBlock_GetIsSubtle(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetIsSubtle(int64_t jarg1, bool jarg2);
    unsigned int AdaptiveCardObjectModel_TextBlock_GetMaxLines(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetMaxLines(int64_t jarg1, int64_t jarg2);
    int AdaptiveCardObjectModel_TextBlock_GetHorizontalAlignment(int64_t jarg1);
    void AdaptiveCardObjectModel_TextBlock_SetHorizontalAlignment(int64_t jarg1, int jarg2);
    int64_t AdaptiveCardObjectModel_TextBlock_dynamic_cast(int64_t jarg1);
    
//AdaptiveCard
    int64_t AdaptiveCardObjectModel_new_1AdaptiveCard__1SWIG_10();
    int64_t AdaptiveCardObjectModel_new_1AdaptiveCard__1SWIG_11(const char* jarg1, const char* jarg2, const char* jarg3, const char* jarg4);
    swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetVersion(int64_t jarg1);
    void AdaptiveCardObjectModel_AdaptiveCard_SetVersion(int64_t jarg1, const char* jarg2);
    swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetMinVersion(int64_t jarg1);
    void AdaptiveCardObjectModel_AdaptiveCard_SetMinVersion(int64_t jarg1, const char* jarg2);
    swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetFallbackText(int64_t jarg1);
    void AdaptiveCardObjectModel_AdaptiveCard_SetFallbackText(int64_t jarg1, const char* jarg2);
    swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetBackgroundImageUrl(int64_t jarg1) ;
    void AdaptiveCardObjectModel_AdaptiveCard_SetBackgroundImageUrl(int64_t jarg1, const char* jarg2);
    int64_t AdaptiveCardObjectModel_AdaptiveCard_GetBody_1_1SWIG_10(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_AdaptiveCard_GetActions(int64_t jarg1);
    int AdaptiveCardObjectModel_AdaptiveCard_GetElementType(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_AdaptiveCard_DeserializeFromFile(const char* jarg1);
    int64_t AdaptiveCardObjectModel_AdaptiveCard_Deserialize(int64_t jarg1);
    int64_t AdaptiveCardObjectModel_AdaptiveCard_DeserializeFromString(const char* jarg1);
    void AdaptiveCardObjectModel_delete_AdaptiveCard(int64_t jarg1);

    
#ifdef __cplusplus
}
#endif

#endif /* AdaptiveWrapper_h */
