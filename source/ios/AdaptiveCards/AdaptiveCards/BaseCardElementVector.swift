//
//  BaseCardElementVector.swift
//  AdaptiveCards
//
//  Created by Esteban Chavez on 5/23/17.
//  Copyright © 2017 Microsoft. All rights reserved.
//

import Foundation

public class BaseCardElementVector {
    private var swigCPtr : Int64
    private var swigCMemOwn : Bool
    
    internal init(cPtr: Int64, memOwn: Bool) {
        swigCPtr = cPtr
        swigCMemOwn = memOwn
    }
    
    deinit {
        if (swigCPtr != 0) {
            if (swigCMemOwn) {
                swigCMemOwn = false;
                AdaptiveCardObjectModel_delete_BaseCardElementVector(swigCPtr);
            }
            swigCPtr = 0;
        }
    }
    
    internal static func getCPtr(baseCardElementVector: BaseCardElementVector) -> Int64 {
        return baseCardElementVector.swigCPtr
    }
    
    public init() {
        swigCPtr = AdaptiveCardObjectModel_new_BaseCardElementVector_1_1SWIG_10()
        swigCMemOwn = true
    }
    
    public init(n: Int64) {
        swigCPtr = AdaptiveCardObjectModel_new_BaseCardElementVector_1_1SWIG_11(n)
        swigCMemOwn = true
    }
    
    public func size() -> Int64 {
        return AdaptiveCardObjectModel_BaseCardElementVector_size(swigCPtr)
    }
    
    public func capacity() -> Int64 {
        return AdaptiveCardObjectModel_BaseCardElementVector_capacity(swigCPtr)
    }
    
    public func reserve(n: Int64) {
        AdaptiveCardObjectModel_BaseCardElementVector_reserve(swigCPtr, n);
    }
    
    public func isEmpty() -> Bool {
        return AdaptiveCardObjectModel_BaseCardElementVector_isEmpty(swigCPtr);
    }
    
    public func clear() {
        AdaptiveCardObjectModel_BaseCardElementVector_clear(swigCPtr);
    }
    
    public func add(baseCardElement: BaseCardElement) {
        AdaptiveCardObjectModel_BaseCardElementVector_add(swigCPtr,BaseCardElement.getCPtr(baseCardElement: baseCardElement));
    }
    
    public func get(i: Int) -> BaseCardElement? {
        let cPtr = AdaptiveCardObjectModel_BaseCardElementVector_get(swigCPtr, Int32(i));
        return (cPtr == 0) ? nil : BaseCardElement(ptr: cPtr, memOwn: true);
    }
    
    public func set(i: Int, baseCardElement: BaseCardElement) {
        AdaptiveCardObjectModel_BaseCardElementVector_set(swigCPtr, Int32(i), BaseCardElement.getCPtr(baseCardElement: baseCardElement));
    }
}
