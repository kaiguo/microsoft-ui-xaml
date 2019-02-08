// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ScrollBar2.h"

CppWinRTActivatableClassWithDPFactory(ScrollBar2)

GlobalDependencyProperty ScrollBar2Properties::s_IndicatorModeProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_IsEnabledProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_LargeChangeProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_MaxOffsetProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_MinOffsetProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_OffsetProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_OrientationProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_ScrollBarStyleProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_SmallChangeProperty{ nullptr };
GlobalDependencyProperty ScrollBar2Properties::s_ViewportProperty{ nullptr };

ScrollBar2Properties::ScrollBar2Properties()
{
    EnsureProperties();
}

void ScrollBar2Properties::EnsureProperties()
{
    if (!s_IndicatorModeProperty)
    {
        s_IndicatorModeProperty =
            InitializeDependencyProperty(
                L"IndicatorMode",
                winrt::name_of<winrt::ScrollingIndicatorMode>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingIndicatorMode>::BoxValueIfNecessary(ScrollBar2::s_defaultIndicatorMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IsEnabledProperty)
    {
        s_IsEnabledProperty =
            InitializeDependencyProperty(
                L"IsEnabled",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(ScrollBar2::s_defaultIsEnabled),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_LargeChangeProperty)
    {
        s_LargeChangeProperty =
            InitializeDependencyProperty(
                L"LargeChange",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollBar2::s_defaultLargeChange),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_MaxOffsetProperty)
    {
        s_MaxOffsetProperty =
            InitializeDependencyProperty(
                L"MaxOffset",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollBar2::s_defaultMaxOffset),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_MinOffsetProperty)
    {
        s_MinOffsetProperty =
            InitializeDependencyProperty(
                L"MinOffset",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollBar2::s_defaultMinOffset),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_OffsetProperty)
    {
        s_OffsetProperty =
            InitializeDependencyProperty(
                L"Offset",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollBar2::s_defaultOffset),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_OrientationProperty)
    {
        s_OrientationProperty =
            InitializeDependencyProperty(
                L"Orientation",
                winrt::name_of<winrt::Orientation>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<winrt::Orientation>::BoxValueIfNecessary(ScrollBar2::s_defaultOrientation),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ScrollBarStyleProperty)
    {
        s_ScrollBarStyleProperty =
            InitializeDependencyProperty(
                L"ScrollBarStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_SmallChangeProperty)
    {
        s_SmallChangeProperty =
            InitializeDependencyProperty(
                L"SmallChange",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollBar2::s_defaultSmallChange),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ViewportProperty)
    {
        s_ViewportProperty =
            InitializeDependencyProperty(
                L"Viewport",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollBar2>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollBar2::s_defaultViewport),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void ScrollBar2Properties::ClearProperties()
{
    s_IndicatorModeProperty = nullptr;
    s_IsEnabledProperty = nullptr;
    s_LargeChangeProperty = nullptr;
    s_MaxOffsetProperty = nullptr;
    s_MinOffsetProperty = nullptr;
    s_OffsetProperty = nullptr;
    s_OrientationProperty = nullptr;
    s_ScrollBarStyleProperty = nullptr;
    s_SmallChangeProperty = nullptr;
    s_ViewportProperty = nullptr;
}

void ScrollBar2Properties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollBar2>();
    winrt::get_self<ScrollBar2>(owner)->OnPropertyChanged(args);
}

void ScrollBar2Properties::IndicatorMode(winrt::ScrollingIndicatorMode const& value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_IndicatorModeProperty, ValueHelper<winrt::ScrollingIndicatorMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingIndicatorMode ScrollBar2Properties::IndicatorMode()
{
    return ValueHelper<winrt::ScrollingIndicatorMode>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_IndicatorModeProperty));
}

void ScrollBar2Properties::IsEnabled(bool value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_IsEnabledProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ScrollBar2Properties::IsEnabled()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_IsEnabledProperty));
}

void ScrollBar2Properties::LargeChange(double value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_LargeChangeProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollBar2Properties::LargeChange()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_LargeChangeProperty));
}

void ScrollBar2Properties::MaxOffset(double value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_MaxOffsetProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollBar2Properties::MaxOffset()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_MaxOffsetProperty));
}

void ScrollBar2Properties::MinOffset(double value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_MinOffsetProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollBar2Properties::MinOffset()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_MinOffsetProperty));
}

void ScrollBar2Properties::Offset(double value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_OffsetProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollBar2Properties::Offset()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_OffsetProperty));
}

void ScrollBar2Properties::Orientation(winrt::Orientation const& value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_OrientationProperty, ValueHelper<winrt::Orientation>::BoxValueIfNecessary(value));
}

winrt::Orientation ScrollBar2Properties::Orientation()
{
    return ValueHelper<winrt::Orientation>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_OrientationProperty));
}

void ScrollBar2Properties::ScrollBarStyle(winrt::Style const& value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_ScrollBarStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
}

winrt::Style ScrollBar2Properties::ScrollBarStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_ScrollBarStyleProperty));
}

void ScrollBar2Properties::SmallChange(double value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_SmallChangeProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollBar2Properties::SmallChange()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_SmallChangeProperty));
}

void ScrollBar2Properties::Viewport(double value)
{
    static_cast<ScrollBar2*>(this)->SetValue(s_ViewportProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollBar2Properties::Viewport()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollBar2*>(this)->GetValue(s_ViewportProperty));
}
