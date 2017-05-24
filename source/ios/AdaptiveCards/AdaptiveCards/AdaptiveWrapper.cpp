//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>

#include <string>


#include <typeinfo>
#include <stdexcept>


#include <vector>
#include <stdexcept>


//#include "pch.h"
#include <memory>
#include "../../../shared/cpp/ObjectModel/Enums.h"
#include "../../../shared/cpp/ObjectModel/BaseCardElement.h"
#include "../../../shared/cpp/ObjectModel/BaseActionElement.h"
#include "../../../shared/cpp/ObjectModel/Container.h"
#include "../../../shared/cpp/ObjectModel/TextBlock.h"
#include "../../../shared/cpp/ObjectModel/Image.h"
#include "../../../shared/cpp/ObjectModel/ImageSet.h"
#include "../../../shared/cpp/ObjectModel/Column.h"
#include "../../../shared/cpp/ObjectModel/ColumnSet.h"
#include "../../../shared/cpp/ObjectModel/Fact.h"
#include "../../../shared/cpp/ObjectModel/FactSet.h"
#include "../../../shared/cpp/ObjectModel/InputChoice.h"
#include "../../../shared/cpp/ObjectModel/InputChoiceSet.h"
#include "../../../shared/cpp/ObjectModel/AdaptiveCard.h"
#include "../../../shared/cpp/ObjectModel/AdaptiveCardParseException.h"
#include "../../../shared/cpp/ObjectModel/HostOptions.h"

#include "AdaptiveWrapper.h"

std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::const_reference std_vector_Sl_std_shared_ptr_Sl_AdaptiveCards_BaseCardElement_Sg__Sg__get(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *self,int i){
    int size = int(self->size());
    if (i>=0 && i<size)
        return (*self)[i];
    else
        throw std::out_of_range("vector index out of range");
}

void std_vector_Sl_std_shared_ptr_Sl_AdaptiveCards_BaseCardElement_Sg__Sg__set(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *self,int i,std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type const &val){
    int size = int(self->size());
    if (i>=0 && i<size)
        (*self)[i] = val;
    else
        throw std::out_of_range("vector index out of range");
}

#ifdef __cplusplus
extern "C" {
#endif

struct SWIG_null_deleter {
    void operator() (void const *) const {
    }
};
#define SWIG_NO_NULL_DELETER_0 , SWIG_null_deleter()
#define SWIG_NO_NULL_DELETER_1
    
swiftpp_StringWrapper swiftpp_StringWrapper_create(const char *s)
{
    swiftpp_StringWrapper cs;
    memset(&cs, 0, sizeof(cs));
    if (s)
    {
        auto l = strlen(s)+1;
        if (l < (sizeof(cs)-1))
        {
            memcpy(cs.storage, s, l);
            cs.storage[sizeof(cs)-1] = 1;
        }
        else
        {
            *((char **)cs.storage) = new char[l];
            memcpy(*((char **)cs.storage), s, l);
        }
    }
    return cs;
}

void swiftpp_StringWrapper_destroy(swiftpp_StringWrapper cs)
{
    if (cs.storage[sizeof(cs)-1] != 1)
        delete [] *((char **)cs.storage);
}
const char *swiftpp_StringWrapperUTF8(const swiftpp_StringWrapper * const cs)
{
    if (cs->storage[sizeof(*cs)-1] == 1)
        return cs->storage;
    else
        return *((const char **)cs->storage);
}

AdaptiveCards::TextBlock *AdaptiveCards_TextBlock_dynamic_cast(AdaptiveCards::BaseCardElement *baseCardElement){
    return dynamic_cast<AdaptiveCards::TextBlock *>(baseCardElement);
}

int AdaptiveCardObjectModel_BaseCardElement_GetSeparationStyle(int64_t jarg1) {
    int jresult = 0 ;
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0 ;
    std::shared_ptr< AdaptiveCards::BaseCardElement const > *smartarg1 = 0 ;
    AdaptiveCards::SeparationStyle result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    result = (AdaptiveCards::SeparationStyle)((AdaptiveCards::BaseCardElement const *)arg1)->GetSeparationStyle();
    jresult = (int)result;
    return jresult;
}
    
void AdaptiveCardObjectModel_BaseCardElement_SetSeparationStyle(int64_t jarg1, int jarg2) {
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0;
    AdaptiveCards::SeparationStyle arg2;
    std::shared_ptr< AdaptiveCards::BaseCardElement > *smartarg1 = 0;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = (AdaptiveCards::SeparationStyle)jarg2;
    (arg1)->SetSeparationStyle(arg2);
}
    
void AdaptiveCardObjectModel_delete_BaseCardElement(int64_t jarg1) {
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0 ;
    std::shared_ptr< AdaptiveCards::BaseCardElement > *smartarg1 = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    (void)arg1;
    delete smartarg1;
}

void AdaptiveCardObjectModel_BaseCardElement_SetSpeak(int64_t jarg1, const char* jarg2) {
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0 ;
    std::string arg2 ;
    std::shared_ptr< AdaptiveCards::BaseCardElement > *smartarg1 = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        //TODO: Thow exception
        return ;
    }
    const char *arg2_pstr = jarg2;
    if (!arg2_pstr) return ;
    (&arg2)->assign(arg2_pstr);
    (arg1)->SetSpeak(arg2);
}

swiftpp_StringWrapper AdaptiveCardObjectModel_BaseCardElement_GetSpeak(int64_t jarg1) {
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0 ;
    std::shared_ptr< AdaptiveCards::BaseCardElement const > *smartarg1 = 0 ;
    std::string result;
        
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    result = ((AdaptiveCards::BaseCardElement const *)arg1)->GetSpeak();
    return swiftpp_StringWrapper_create(result.c_str());
}
    
int AdaptiveCardObjectModel_BaseCardElement_GetElementType(int64_t jarg1) {
    int jresult = 0 ;
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0 ;
    std::shared_ptr< AdaptiveCards::BaseCardElement const > *smartarg1 = 0 ;
    AdaptiveCards::CardElementType result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    result = (AdaptiveCards::CardElementType)((AdaptiveCards::BaseCardElement const *)arg1)->GetElementType();
    jresult = (int)result;
    return jresult;
}
    
swiftpp_StringWrapper AdaptiveCardObjectModel_BaseCardElement_Serialize(int64_t jarg1) {
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0 ;
    std::shared_ptr< AdaptiveCards::BaseCardElement > *smartarg1 = 0 ;
    std::string result;
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    result = (arg1)->Serialize();
    return swiftpp_StringWrapper_create(result.c_str());
}

void AdaptiveCardObjectModel_delete_TextBlock(int64_t jarg1) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    (void)arg1; delete smartarg1;
}
    
int64_t AdaptiveCardObjectModel_TextBlock_SWIGSmartPtrUpcast(int64_t jarg1) {
    int64_t baseptr = 0;
    std::shared_ptr< AdaptiveCards::TextBlock > *argp1;
    argp1 = *(std::shared_ptr< AdaptiveCards::TextBlock > **)&jarg1;
    *(std::shared_ptr< AdaptiveCards::BaseCardElement > **)&baseptr = argp1 ? new std::shared_ptr< AdaptiveCards::BaseCardElement >(*argp1) : 0;
    return baseptr;
}

//BaseCardElementVector
    
void AdaptiveCardObjectModel_delete_BaseCardElementVector(int64_t jarg1) {
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
        
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    delete arg1;
}

int64_t AdaptiveCardObjectModel_new_BaseCardElementVector_1_1SWIG_10() {
    int64_t jresult = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *result = 0 ;
        
    result = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *)new std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >();
    *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jresult = result;
    return jresult;
}
    
int64_t AdaptiveCardObjectModel_new_BaseCardElementVector_1_1SWIG_11(int64_t jarg1) {
    int64_t jresult = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::size_type arg1 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *result = 0 ;
    
    arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::size_type)jarg1;
    result = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *)new std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >(arg1);
    *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jresult = result;
    return jresult;
}
    
int64_t AdaptiveCardObjectModel_BaseCardElementVector_size(int64_t jarg1) {
    int64_t jresult = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::size_type result;
        
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    result = ((std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > const *)arg1)->size();
    jresult = (int64_t)result;
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_BaseCardElementVector_capacity(int64_t jarg1) {
    int64_t jresult = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::size_type result;
    
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    result = ((std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > const *)arg1)->capacity();
    jresult = (int64_t)result;
    return jresult;
}
    
void AdaptiveCardObjectModel_BaseCardElementVector_reserve(int64_t jarg1, int64_t jarg2) {
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::size_type arg2 ;
    
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    arg2 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::size_type)jarg2;
    (arg1)->reserve(arg2);
}
    
    bool AdaptiveCardObjectModel_BaseCardElementVector_isEmpty(int64_t jarg1) {
    bool jresult = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
    bool result;
        
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    result = (bool)((std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > const *)arg1)->empty();
    jresult = (bool)result;
    return jresult;
}
    
    
void AdaptiveCardObjectModel_BaseCardElementVector_clear(int64_t jarg1) {
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
        
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    (arg1)->clear();
}
    
    
void AdaptiveCardObjectModel_BaseCardElementVector_add(int64_t jarg1, int64_t jarg2) {
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type *arg2 = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type tempnull2 ;
        
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    arg2 = jarg2 ? *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type **)&jarg2 : &tempnull2;
    (arg1)->push_back((std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type const &)*arg2);
}
    
    
int64_t AdaptiveCardObjectModel_BaseCardElementVector_get(int64_t jarg1, int jarg2) {
    int64_t jresult = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
    int arg2 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type *result = 0 ;
        
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    arg2 = (int)jarg2;
    try {
        result = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type *) &std_vector_Sl_std_shared_ptr_Sl_AdaptiveCards_BaseCardElement_Sg__Sg__get(arg1,arg2);
    }
    catch(std::out_of_range &_e) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return 0;
    }
        
    *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type **)&jresult = *result ? new std::shared_ptr< AdaptiveCards::BaseCardElement >(*result) : 0;
    return jresult;
}
    
    
void AdaptiveCardObjectModel_BaseCardElementVector_set(int64_t jarg1, int jarg2, int64_t jarg3) {
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *arg1 = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) 0 ;
    int arg2 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type *arg3 = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type tempnull3 ;
        
    arg1 = *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jarg1;
    arg2 = (int)jarg2;
    arg3 = jarg3 ? *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > >::value_type **)&jarg3 : &tempnull3;
    try {
        std_vector_Sl_std_shared_ptr_Sl_AdaptiveCards_BaseCardElement_Sg__Sg__set(arg1,arg2,(std::shared_ptr< AdaptiveCards::BaseCardElement > const &)*arg3);
    }
    catch(std::out_of_range &_e) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return ;
    }
}

    
int64_t AdaptiveCardObjectModel_new_TextBlock_1_1SWIG_10() {
    int64_t jresult = 0 ;
    AdaptiveCards::TextBlock *result = 0 ;
    
    result = (AdaptiveCards::TextBlock *)new AdaptiveCards::TextBlock();
    
    *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jresult = result ? new std::shared_ptr<  AdaptiveCards::TextBlock >(result SWIG_NO_NULL_DELETER_1) : 0;
    
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_new_TextBlock_1_1SWIG_11(int jarg1, const char* jarg2, const char* jarg3, int jarg4, int jarg5, int jarg6, bool jarg7, bool jarg8, int jarg9, int jarg10) {
    int64_t jresult = 0 ;
    AdaptiveCards::SeparationStyle arg1 ;
    std::string arg2 ;
    std::string arg3 ;
    AdaptiveCards::TextSize arg4 ;
    AdaptiveCards::TextWeight arg5 ;
    AdaptiveCards::TextColor arg6 ;
    AdaptiveCards::HorizontalAlignment arg10 ;
    AdaptiveCards::TextBlock *result = 0 ;
    
    arg1 = (AdaptiveCards::SeparationStyle)jarg1;
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    (&arg2)->assign(jarg2);
    if(!jarg3) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    (&arg3)->assign(jarg3);
    arg4 = (AdaptiveCards::TextSize)jarg4;
    arg5 = (AdaptiveCards::TextWeight)jarg5;
    arg6 = (AdaptiveCards::TextColor)jarg6;
    arg10 = (AdaptiveCards::HorizontalAlignment)jarg10;
    result = (AdaptiveCards::TextBlock *)new AdaptiveCards::TextBlock(arg1,jarg2,jarg3,arg4,arg5,arg6,jarg7,jarg8,jarg9,arg10);
    
    *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jresult = result ? new std::shared_ptr<  AdaptiveCards::TextBlock >(result SWIG_NO_NULL_DELETER_1) : 0;
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_TextBlock_Deserialize(int64_t jarg1) {
    int64_t jresult = 0 ;
    Json::Value *arg1 = 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock > result;

    arg1 = *(Json::Value **)&jarg1;
    if (!arg1) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Json::Value const & reference is null");
        return 0;
    }
    result = AdaptiveCards::TextBlock::Deserialize((Json::Value const &)*arg1);
    *(std::shared_ptr< AdaptiveCards::TextBlock > **)&jresult = result ? new std::shared_ptr< AdaptiveCards::TextBlock >(result) : 0;
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_TextBlock_DeserializeFromString(const char* jarg1) {
    int64_t jresult = 0 ;
    std::string *arg1 = 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock > result;

    if(!jarg1) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    std::string arg1_str(jarg1);
    arg1 = &arg1_str;
    result = AdaptiveCards::TextBlock::DeserializeFromString((std::string const &)*arg1);
    *(std::shared_ptr< AdaptiveCards::TextBlock > **)&jresult = result ? new std::shared_ptr< AdaptiveCards::TextBlock >(result) : 0;
    return jresult;
}
    
    
swiftpp_StringWrapper AdaptiveCardObjectModel_TextBlock_Serialize(int64_t jarg1) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
    std::string result;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (arg1)->Serialize();
    return swiftpp_StringWrapper_create(result.c_str());
}
    
    
swiftpp_StringWrapper AdaptiveCardObjectModel_TextBlock_GetText(int64_t jarg1) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    std::string result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = ((AdaptiveCards::TextBlock const *)arg1)->GetText();
    return swiftpp_StringWrapper_create(result.c_str());
}
    
    
void AdaptiveCardObjectModel_TextBlock_SetText(int64_t jarg1, const char* jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::string arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return ;
    }
    (&arg2)->assign(jarg2);
    (arg1)->SetText(arg2);
}
    
    
int AdaptiveCardObjectModel_TextBlock_GetTextSize(int64_t jarg1) {
    int jresult = 0 ;
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    AdaptiveCards::TextSize result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (AdaptiveCards::TextSize)((AdaptiveCards::TextBlock const *)arg1)->GetTextSize();
    jresult = (int)result;
    return jresult;
}
    
    
void AdaptiveCardObjectModel_TextBlock_SetTextSize(int64_t jarg1, int jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    AdaptiveCards::TextSize arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;

    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = (AdaptiveCards::TextSize)jarg2;
    (arg1)->SetTextSize(arg2);
}
    
    
int AdaptiveCardObjectModel_TextBlock_GetTextWeight(int64_t jarg1) {
    int jresult = 0 ;
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    AdaptiveCards::TextWeight result;

    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (AdaptiveCards::TextWeight)((AdaptiveCards::TextBlock const *)arg1)->GetTextWeight();
    jresult = (int)result;
    return jresult;
}
    
    
void AdaptiveCardObjectModel_TextBlock_SetTextWeight(int64_t jarg1, int jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    AdaptiveCards::TextWeight arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;

    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = (AdaptiveCards::TextWeight)jarg2;
    (arg1)->SetTextWeight(arg2);
}
    
    
int AdaptiveCardObjectModel_TextBlock_GetTextColor(int64_t jarg1) {
    int jresult = 0 ;
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    AdaptiveCards::TextColor result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (AdaptiveCards::TextColor)((AdaptiveCards::TextBlock const *)arg1)->GetTextColor();
    jresult = (int)result;
    return jresult;
}
    
void AdaptiveCardObjectModel_TextBlock_SetTextColor(int64_t jarg1, int jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    AdaptiveCards::TextColor arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = (AdaptiveCards::TextColor)jarg2;
    (arg1)->SetTextColor(arg2);
}
    
    
bool AdaptiveCardObjectModel_TextBlock_GetWrap(int64_t jarg1) {
    bool jresult = 0 ;
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    bool result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (bool)((AdaptiveCards::TextBlock const *)arg1)->GetWrap();
    jresult = (bool)result;
    return jresult;
}
    
void AdaptiveCardObjectModel_TextBlock_SetWrap(int64_t jarg1, bool jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    bool arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = jarg2 ? true : false;
    (arg1)->SetWrap(arg2);
}
    
bool AdaptiveCardObjectModel_TextBlock_GetIsSubtle(int64_t jarg1) {
    bool jresult = 0 ;
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    bool result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (bool)((AdaptiveCards::TextBlock const *)arg1)->GetIsSubtle();
    jresult = (bool)result;
    return jresult;
}
    
void AdaptiveCardObjectModel_TextBlock_SetIsSubtle(int64_t jarg1, bool jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    bool arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = jarg2 ? true : false;
    (arg1)->SetIsSubtle(arg2);
}
    
unsigned int AdaptiveCardObjectModel_TextBlock_GetMaxLines(int64_t jarg1) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    unsigned int result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (unsigned int)((AdaptiveCards::TextBlock const *)arg1)->GetMaxLines();
    return result;
}
    
    
void AdaptiveCardObjectModel_TextBlock_SetMaxLines(int64_t jarg1, int64_t jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    unsigned int arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
   
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = (unsigned int)jarg2;
    (arg1)->SetMaxLines(arg2);
}
    
int AdaptiveCardObjectModel_TextBlock_GetHorizontalAlignment(int64_t jarg1) {
    int jresult = 0 ;
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    std::shared_ptr< AdaptiveCards::TextBlock const > *smartarg1 = 0 ;
    AdaptiveCards::HorizontalAlignment result;
    
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    result = (AdaptiveCards::HorizontalAlignment)((AdaptiveCards::TextBlock const *)arg1)->GetHorizontalAlignment();
    jresult = (int)result;
    return jresult;
}
    
void AdaptiveCardObjectModel_TextBlock_SetHorizontalAlignment(int64_t jarg1, int jarg2) {
    AdaptiveCards::TextBlock *arg1 = (AdaptiveCards::TextBlock *) 0 ;
    AdaptiveCards::HorizontalAlignment arg2 ;
    std::shared_ptr< AdaptiveCards::TextBlock > *smartarg1 = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jarg1;
    arg1 = (AdaptiveCards::TextBlock *)(smartarg1 ? smartarg1->get() : 0);
    arg2 = (AdaptiveCards::HorizontalAlignment)jarg2;
    (arg1)->SetHorizontalAlignment(arg2);
}
    
int64_t AdaptiveCardObjectModel_TextBlock_dynamic_cast(int64_t jarg1) {
    int64_t jresult = 0 ;
    AdaptiveCards::BaseCardElement *arg1 = (AdaptiveCards::BaseCardElement *) 0 ;
    std::shared_ptr< AdaptiveCards::BaseCardElement > *smartarg1 = 0 ;
    AdaptiveCards::TextBlock *result = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::BaseCardElement > **)&jarg1;
    arg1 = (AdaptiveCards::BaseCardElement *)(smartarg1 ? smartarg1->get() : 0);
    {
        result = (AdaptiveCards::TextBlock *)AdaptiveCards_TextBlock_dynamic_cast(arg1);
        if (!result) {
            return 0;
        /*
            jclass excep = jenv->FindClass("java/lang/ClassCastException");
            if (excep) {
                jenv->ThrowNew(excep, "dynamic_cast exception");
            }
         */
        }
    }
    
    *(std::shared_ptr<  AdaptiveCards::TextBlock > **)&jresult = result ? new std::shared_ptr<  AdaptiveCards::TextBlock >(result SWIG_NO_NULL_DELETER_0) : 0;
        
    return jresult;
}

//AdaptiveCard
int64_t AdaptiveCardObjectModel_new_1AdaptiveCard__1SWIG_10() {
    int64_t jresult = 0 ;
    AdaptiveCards::AdaptiveCard *result = 0 ;
    
    result = (AdaptiveCards::AdaptiveCard *)new AdaptiveCards::AdaptiveCard();
        
    *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jresult = result ? new std::shared_ptr<  AdaptiveCards::AdaptiveCard >(result SWIG_NO_NULL_DELETER_1) : 0;
    
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_new_1AdaptiveCard__1SWIG_11(const char* jarg1, const char* jarg2, const char* jarg3, const char* jarg4) {
    int64_t jresult = 0 ;
    std::string arg1 ;
    std::string arg2 ;
    std::string arg3 ;
    std::string arg4 ;
    AdaptiveCards::AdaptiveCard *result = 0 ;
        
    if(!jarg1) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    (&arg1)->assign(jarg1);
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    (&arg2)->assign(jarg2);
    if(!jarg3) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    (&arg3)->assign(jarg3);
    if(!jarg4) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    (&arg4)->assign(jarg4);
    result = (AdaptiveCards::AdaptiveCard *)new AdaptiveCards::AdaptiveCard(arg1,arg2,arg3,arg4);
        
    *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jresult = result ? new std::shared_ptr<  AdaptiveCards::AdaptiveCard >(result SWIG_NO_NULL_DELETER_1) : 0;
        
    return jresult;
}

swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetVersion(int64_t jarg1) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard const > *smartarg1 = 0 ;
    std::string result;
        
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    result = ((AdaptiveCards::AdaptiveCard const *)arg1)->GetVersion();
    return swiftpp_StringWrapper_create(result.c_str());
}
    
    
void AdaptiveCardObjectModel_AdaptiveCard_SetVersion(int64_t jarg1, const char* jarg2) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::string arg2 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > *smartarg1 = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return ;
    }
    (&arg2)->assign(jarg2);
    (arg1)->SetVersion(arg2);
}
    
    
swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetMinVersion(int64_t jarg1) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard const > *smartarg1 = 0 ;
    std::string result;
        
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    result = ((AdaptiveCards::AdaptiveCard const *)arg1)->GetMinVersion();
    return swiftpp_StringWrapper_create(result.c_str());
}
    
    
void AdaptiveCardObjectModel_AdaptiveCard_SetMinVersion(int64_t jarg1, const char* jarg2) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::string arg2 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > *smartarg1 = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return ;
    }
    (&arg2)->assign(jarg2);
    (arg1)->SetMinVersion(arg2);
}
    
    
swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetFallbackText(int64_t jarg1) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard const > *smartarg1 = 0 ;
    std::string result;
        
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    result = ((AdaptiveCards::AdaptiveCard const *)arg1)->GetFallbackText();
    return swiftpp_StringWrapper_create(result.c_str());
}
    
    
void AdaptiveCardObjectModel_AdaptiveCard_SetFallbackText(int64_t jarg1, const char* jarg2) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::string arg2 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > *smartarg1 = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return ;
    }
    (&arg2)->assign(jarg2);
    (arg1)->SetFallbackText(arg2);
}
    
    
swiftpp_StringWrapper AdaptiveCardObjectModel_AdaptiveCard_GetBackgroundImageUrl(int64_t jarg1) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard const > *smartarg1 = 0 ;
    std::string result;

    smartarg1 = *(std::shared_ptr< const AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    result = ((AdaptiveCards::AdaptiveCard const *)arg1)->GetBackgroundImageUrl();
    return swiftpp_StringWrapper_create(result.c_str());
}
    
    
void AdaptiveCardObjectModel_AdaptiveCard_SetBackgroundImageUrl(int64_t jarg1, const char* jarg2) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::string arg2 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > *smartarg1 = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    if(!jarg2) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return ;
    }
    (&arg2)->assign(jarg2);
    (arg1)->SetBackgroundImageUrl(arg2);
}
    
    
int64_t AdaptiveCardObjectModel_AdaptiveCard_GetBody_1_1SWIG_10(int64_t jarg1) {
    int64_t jresult = 0 ;
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > *smartarg1 = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *result = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    result = (std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > *) &(arg1)->GetBody();
    *(std::vector< std::shared_ptr< AdaptiveCards::BaseCardElement > > **)&jresult = result;
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_AdaptiveCard_GetActions(int64_t jarg1) {
    int64_t jresult = 0 ;
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard const > *smartarg1 = 0 ;
    std::vector< std::shared_ptr< AdaptiveCards::BaseActionElement > > *result = 0 ;
        
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    result = (std::vector< std::shared_ptr< AdaptiveCards::BaseActionElement > > *) &((AdaptiveCards::AdaptiveCard const *)arg1)->GetActions();
    *(std::vector< std::shared_ptr< AdaptiveCards::BaseActionElement > > **)&jresult = result;
    return jresult;
}
    
    
int AdaptiveCardObjectModel_AdaptiveCard_GetElementType(int64_t jarg1) {
    int jresult = 0 ;
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard const > *smartarg1 = 0 ;
    AdaptiveCards::CardElementType result;
        
    smartarg1 = *(std::shared_ptr< const AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    result = (AdaptiveCards::CardElementType)((AdaptiveCards::AdaptiveCard const *)arg1)->GetElementType();
    jresult = (int)result;
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_AdaptiveCard_DeserializeFromFile(const char* jarg1) {
    int64_t jresult = 0 ;
    std::string *arg1 = 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > result;
        
    if(!jarg1) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    std::string arg1_str(jarg1);
    arg1 = &arg1_str;
    try {
        result = AdaptiveCards::AdaptiveCard::DeserializeFromFile((std::string const &)*arg1);
    }
    catch(AdaptiveCards::AdaptiveCardParseException &_e) {
        {
            //jclass excep = jenv->FindClass("java/io/IOException");
            //if (excep)
                //jenv->ThrowNew(excep, (&_e)->what());
            return 0;
        }
    }
        
    *(std::shared_ptr< AdaptiveCards::AdaptiveCard > **)&jresult = result ? new std::shared_ptr< AdaptiveCards::AdaptiveCard >(result) : 0;
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_AdaptiveCard_Deserialize(int64_t jarg1) {
    int64_t jresult = 0 ;
    Json::Value *arg1 = 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > result;
        
    arg1 = *(Json::Value **)&jarg1;
    if (!arg1) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Json::Value const & reference is null");
        return 0;
    }
    try {
        result = AdaptiveCards::AdaptiveCard::Deserialize((Json::Value const &)*arg1);
    }
    catch(AdaptiveCards::AdaptiveCardParseException &_e) {
        {
            //jclass excep = jenv->FindClass("java/io/IOException");
            //if (excep)
                //jenv->ThrowNew(excep, (&_e)->what());
            return 0;
        }
    }
        
    *(std::shared_ptr< AdaptiveCards::AdaptiveCard > **)&jresult = result ? new std::shared_ptr< AdaptiveCards::AdaptiveCard >(result) : 0;
    return jresult;
}
    
    
int64_t AdaptiveCardObjectModel_AdaptiveCard_DeserializeFromString(const char* jarg1) {
    int64_t jresult = 0 ;
    std::string *arg1 = 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > result;
        
    if(!jarg1) {
        //SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
        return 0;
    }
    std::string arg1_str(jarg1);
    arg1 = &arg1_str;
    try {
        result = AdaptiveCards::AdaptiveCard::DeserializeFromString((std::string const &)*arg1);
    }
    catch(AdaptiveCards::AdaptiveCardParseException &_e) {
        {
            //jclass excep = jenv->FindClass("java/io/IOException");
            //if (excep)
                //jenv->ThrowNew(excep, (&_e)->what());
            return 0;
        }
    }
        
    *(std::shared_ptr< AdaptiveCards::AdaptiveCard > **)&jresult = result ? new std::shared_ptr< AdaptiveCards::AdaptiveCard >(result) : 0;
    return jresult;
}
    
void AdaptiveCardObjectModel_delete_1AdaptiveCard(int64_t jarg1) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > *smartarg1 = 0 ;
        
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    (void)arg1; delete smartarg1;
}

void AdaptiveCardObjectModel_delete_AdaptiveCard(int64_t jarg1) {
    AdaptiveCards::AdaptiveCard *arg1 = (AdaptiveCards::AdaptiveCard *) 0 ;
    std::shared_ptr< AdaptiveCards::AdaptiveCard > *smartarg1 = 0 ;
    
    smartarg1 = *(std::shared_ptr<  AdaptiveCards::AdaptiveCard > **)&jarg1;
    arg1 = (AdaptiveCards::AdaptiveCard *)(smartarg1 ? smartarg1->get() : 0);
    (void)arg1; delete smartarg1;
}


#ifdef __cplusplus
}
#endif
