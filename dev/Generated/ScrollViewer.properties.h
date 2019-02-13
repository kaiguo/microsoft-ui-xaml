// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ScrollViewerProperties
{
public:
    ScrollViewerProperties();

    void ComputedHorizontalScrollBarVisibility(winrt::Visibility const& value);
    winrt::Visibility ComputedHorizontalScrollBarVisibility();

    void ComputedVerticalScrollBarVisibility(winrt::Visibility const& value);
    winrt::Visibility ComputedVerticalScrollBarVisibility();

    void Content(winrt::UIElement const& value);
    winrt::UIElement Content();

    void ContentOrientation(winrt::ContentOrientation const& value);
    winrt::ContentOrientation ContentOrientation();

    void HorizontalAnchorRatio(double value);
    double HorizontalAnchorRatio();

    void HorizontalScrollBarVisibility(winrt::ScrollBarVisibility const& value);
    winrt::ScrollBarVisibility HorizontalScrollBarVisibility();

    void HorizontalScrollChainingMode(winrt::ChainingMode const& value);
    winrt::ChainingMode HorizontalScrollChainingMode();

    void HorizontalScrollController(winrt::IScrollController const& value);
    winrt::IScrollController HorizontalScrollController();

    void HorizontalScrollMode(winrt::ScrollMode const& value);
    winrt::ScrollMode HorizontalScrollMode();

    void HorizontalScrollRailingMode(winrt::RailingMode const& value);
    winrt::RailingMode HorizontalScrollRailingMode();

    void IgnoredInputKind(winrt::InputKind const& value);
    winrt::InputKind IgnoredInputKind();

    void MaxZoomFactor(double value);
    double MaxZoomFactor();

    void MinZoomFactor(double value);
    double MinZoomFactor();

    void VerticalAnchorRatio(double value);
    double VerticalAnchorRatio();

    void VerticalScrollBarVisibility(winrt::ScrollBarVisibility const& value);
    winrt::ScrollBarVisibility VerticalScrollBarVisibility();

    void VerticalScrollChainingMode(winrt::ChainingMode const& value);
    winrt::ChainingMode VerticalScrollChainingMode();

    void VerticalScrollController(winrt::IScrollController const& value);
    winrt::IScrollController VerticalScrollController();

    void VerticalScrollMode(winrt::ScrollMode const& value);
    winrt::ScrollMode VerticalScrollMode();

    void VerticalScrollRailingMode(winrt::RailingMode const& value);
    winrt::RailingMode VerticalScrollRailingMode();

    void ZoomChainingMode(winrt::ChainingMode const& value);
    winrt::ChainingMode ZoomChainingMode();

    void ZoomMode(winrt::ZoomMode const& value);
    winrt::ZoomMode ZoomMode();

    static winrt::DependencyProperty ComputedHorizontalScrollBarVisibilityProperty() { return s_ComputedHorizontalScrollBarVisibilityProperty; }
    static winrt::DependencyProperty ComputedVerticalScrollBarVisibilityProperty() { return s_ComputedVerticalScrollBarVisibilityProperty; }
    static winrt::DependencyProperty ContentProperty() { return s_ContentProperty; }
    static winrt::DependencyProperty ContentOrientationProperty() { return s_ContentOrientationProperty; }
    static winrt::DependencyProperty HorizontalAnchorRatioProperty() { return s_HorizontalAnchorRatioProperty; }
    static winrt::DependencyProperty HorizontalScrollBarVisibilityProperty() { return s_HorizontalScrollBarVisibilityProperty; }
    static winrt::DependencyProperty HorizontalScrollChainingModeProperty() { return s_HorizontalScrollChainingModeProperty; }
    static winrt::DependencyProperty HorizontalScrollControllerProperty() { return s_HorizontalScrollControllerProperty; }
    static winrt::DependencyProperty HorizontalScrollModeProperty() { return s_HorizontalScrollModeProperty; }
    static winrt::DependencyProperty HorizontalScrollRailingModeProperty() { return s_HorizontalScrollRailingModeProperty; }
    static winrt::DependencyProperty IgnoredInputKindProperty() { return s_IgnoredInputKindProperty; }
    static winrt::DependencyProperty MaxZoomFactorProperty() { return s_MaxZoomFactorProperty; }
    static winrt::DependencyProperty MinZoomFactorProperty() { return s_MinZoomFactorProperty; }
    static winrt::DependencyProperty ScrollerProperty() { return s_ScrollerProperty; }
    static winrt::DependencyProperty VerticalAnchorRatioProperty() { return s_VerticalAnchorRatioProperty; }
    static winrt::DependencyProperty VerticalScrollBarVisibilityProperty() { return s_VerticalScrollBarVisibilityProperty; }
    static winrt::DependencyProperty VerticalScrollChainingModeProperty() { return s_VerticalScrollChainingModeProperty; }
    static winrt::DependencyProperty VerticalScrollControllerProperty() { return s_VerticalScrollControllerProperty; }
    static winrt::DependencyProperty VerticalScrollModeProperty() { return s_VerticalScrollModeProperty; }
    static winrt::DependencyProperty VerticalScrollRailingModeProperty() { return s_VerticalScrollRailingModeProperty; }
    static winrt::DependencyProperty ZoomChainingModeProperty() { return s_ZoomChainingModeProperty; }
    static winrt::DependencyProperty ZoomModeProperty() { return s_ZoomModeProperty; }

    static GlobalDependencyProperty s_ComputedHorizontalScrollBarVisibilityProperty;
    static GlobalDependencyProperty s_ComputedVerticalScrollBarVisibilityProperty;
    static GlobalDependencyProperty s_ContentProperty;
    static GlobalDependencyProperty s_ContentOrientationProperty;
    static GlobalDependencyProperty s_HorizontalAnchorRatioProperty;
    static GlobalDependencyProperty s_HorizontalScrollBarVisibilityProperty;
    static GlobalDependencyProperty s_HorizontalScrollChainingModeProperty;
    static GlobalDependencyProperty s_HorizontalScrollControllerProperty;
    static GlobalDependencyProperty s_HorizontalScrollModeProperty;
    static GlobalDependencyProperty s_HorizontalScrollRailingModeProperty;
    static GlobalDependencyProperty s_IgnoredInputKindProperty;
    static GlobalDependencyProperty s_MaxZoomFactorProperty;
    static GlobalDependencyProperty s_MinZoomFactorProperty;
    static GlobalDependencyProperty s_ScrollerProperty;
    static GlobalDependencyProperty s_VerticalAnchorRatioProperty;
    static GlobalDependencyProperty s_VerticalScrollBarVisibilityProperty;
    static GlobalDependencyProperty s_VerticalScrollChainingModeProperty;
    static GlobalDependencyProperty s_VerticalScrollControllerProperty;
    static GlobalDependencyProperty s_VerticalScrollModeProperty;
    static GlobalDependencyProperty s_VerticalScrollRailingModeProperty;
    static GlobalDependencyProperty s_ZoomChainingModeProperty;
    static GlobalDependencyProperty s_ZoomModeProperty;

    winrt::event_token AnchorRequested(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerAnchorRequestedEventArgs> const& value);
    void AnchorRequested(winrt::event_token const& token);
    winrt::event_token BringingIntoView(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerBringingIntoViewEventArgs> const& value);
    void BringingIntoView(winrt::event_token const& token);
    winrt::event_token ChangingOffsets(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerChangingOffsetsEventArgs> const& value);
    void ChangingOffsets(winrt::event_token const& token);
    winrt::event_token ChangingZoomFactor(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerChangingZoomFactorEventArgs> const& value);
    void ChangingZoomFactor(winrt::event_token const& token);
    winrt::event_token ExtentChanged(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable> const& value);
    void ExtentChanged(winrt::event_token const& token);
    winrt::event_token StateChanged(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable> const& value);
    void StateChanged(winrt::event_token const& token);
    winrt::event_token ViewChangeCompleted(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerViewChangeCompletedEventArgs> const& value);
    void ViewChangeCompleted(winrt::event_token const& token);
    winrt::event_token ViewChanged(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable> const& value);
    void ViewChanged(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerAnchorRequestedEventArgs>> m_anchorRequestedEventSource;
    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerBringingIntoViewEventArgs>> m_bringingIntoViewEventSource;
    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerChangingOffsetsEventArgs>> m_changingOffsetsEventSource;
    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerChangingZoomFactorEventArgs>> m_changingZoomFactorEventSource;
    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable>> m_extentChangedEventSource;
    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable>> m_stateChangedEventSource;
    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerViewChangeCompletedEventArgs>> m_viewChangeCompletedEventSource;
    event_source<winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable>> m_viewChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPropertyChanged_ValidateAnchorRatio(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPropertyChanged_ValidateZoomFactoryBoundary(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
