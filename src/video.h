//
// Created by efry on 3/11/2017.
//

#include <SDL_pixels.h>
#include "defines.h"
#include "tile.h"

#ifndef COSMO_ENGINE_VIDEO_H
#define COSMO_ENGINE_VIDEO_H

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 200

void display_fullscreen_image(uint8 image_number);
void fade_to_black_speed_3();

bool video_init();
void video_shutdown();

void video_update();

void video_draw_tile(Tile *tile, uint16 x, uint16 y);
void video_draw_tile_solid_white(Tile *tile, uint16 x, uint16 y);
void video_draw_tile_with_clip_rect(Tile *tile, uint16 x, uint16 y, uint16 clip_x, uint16 clip_y, uint16 clip_w, uint16 clip_h);
void video_draw_tile_flipped(Tile *tile, uint16 x, uint16 y);

void video_update_palette(int palette_index, SDL_Color new_color);

void fade_to_black(uint16 wait_time);

#endif //COSMO_ENGINE_VIDEO_H
