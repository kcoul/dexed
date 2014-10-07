/**
 *
 * Copyright (c) 2013 Pascal Gauthier.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 */

#ifndef DXLOOKNFEEL_H_INCLUDED
#define DXLOOKNFEEL_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class DXLookNFeel : public LookAndFeel_V3 {
    Typeface::Ptr defaultFont;
public:
    static Colour comboBoxBackground;
    static Colour background;
    static Colour fillColour;
    DXLookNFeel();

    virtual void drawRotarySlider(Graphics &g, int x, int y, int width, int height, float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle,  Slider &slider );

    virtual void drawToggleButton(Graphics& g, ToggleButton& button, bool isMouseOverButton, bool isButtonDown);
    static Colour dxDarkBrown;
    static Colour dxLightBrown;
    
    virtual void drawLinearSliderBackground (Graphics&, int x, int y, int width, int height,
                                     float sliderPos, float minSliderPos, float maxSliderPos,
                                     const Slider::SliderStyle, Slider&) override;
    
    virtual void drawLinearSliderThumb (Graphics&, int x, int y, int width, int height,
                                float sliderPos, float minSliderPos, float maxSliderPos,
                                const Slider::SliderStyle, Slider&) override;
    
    virtual void drawButtonBackground (Graphics&, Button&, const Colour& backgroundColour,
                               bool isMouseOverButton, bool isButtonDown) override;
    
    virtual Typeface::Ptr getTypefaceForFont(const Font &);
};

#endif  // DXLOOKNFEEL_H_INCLUDED
