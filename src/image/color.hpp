#pragma once
#include "../utils/macro.hpp"
#include "../plugins/color-type.hpp"

namespace seze {

//! universal pixel data maker
byte* make_pixels(color_t type, int pixel_count);
void destroy_pixels(byte* data);
size_t get_size(color_t type);

} // seze ns
