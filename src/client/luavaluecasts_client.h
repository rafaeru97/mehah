/*
 * Copyright (c) 2010-2022 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include "game.h"
#include "outfit.h"

 // outfit
int push_luavalue(const Outfit& outfit);
bool luavalue_cast(int index, Outfit& outfit);

// position
int push_luavalue(const Position& pos);
bool luavalue_cast(int index, Position& pos);

// market
int push_luavalue(const MarketData& data);
bool luavalue_cast(int index, MarketData& data);

// light
int push_luavalue(const Light& light);
bool luavalue_cast(int index, Light& light);

// unjustified points
int push_luavalue(const UnjustifiedPoints& unjustifiedPoints);
bool luavalue_cast(int index, UnjustifiedPoints& unjustifiedPoints);

// imbuement
int push_luavalue(const Imbuement& i);
int push_luavalue(const ImbuementTrackerItem& i);

// Bless
int push_luavalue(const BlessData& bless);
int push_luavalue(const LogData& log);
int push_luavalue(const BlessDialogData& data);
// Store
int push_luavalue(const StoreCategory& category);
int push_luavalue(const SubOffer& subOffer);
int push_luavalue(const StoreOffer& offer);
int push_luavalue(const HomeOffer& homeOffer);
int push_luavalue(const Banner& banner);
int push_luavalue(const StoreData& storeData);
