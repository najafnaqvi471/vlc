/*****************************************************************************
 * playlist.h:  Playlist import module common functions
 *****************************************************************************
 * Copyright (C) 2004 VideoLAN
 * $Id$
 *
 * Authors: Sigmund Augdal <sigmunau@idi.ntnu.no>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/

char *E_(ProcessMRL)( char *, char * );
char *E_(FindPrefix)( demux_t * );

vlc_bool_t E_(FindItem)( demux_t *, playlist_t *, playlist_item_t **);

int E_(Import_Old) ( vlc_object_t * );

int E_(Import_Native) ( vlc_object_t * );
void E_(Close_Native) ( vlc_object_t * );

int E_(Import_M3U) ( vlc_object_t * );
void E_(Close_M3U) ( vlc_object_t * );

int E_(Import_PLS) ( vlc_object_t * );
void E_(Close_PLS) ( vlc_object_t * );

int E_(Import_B4S) ( vlc_object_t * );
void E_(Close_B4S) ( vlc_object_t * );
