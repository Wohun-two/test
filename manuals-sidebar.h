/*
 * manuals-sidebar.h
 *
 * Copyright 2024 Christian Hergert <chergert@redhat.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <gtk/gtk.h>

#include "manuals-navigatable.h"
#include "manuals-repository.h"

G_BEGIN_DECLS

#define MANUALS_TYPE_SIDEBAR (manuals_sidebar_get_type())

G_DECLARE_FINAL_TYPE (ManualsSidebar, manuals_sidebar, MANUALS, SIDEBAR, GtkWidget)

ManualsRepository *manuals_sidebar_get_repository (ManualsSidebar     *self);
void               manuals_sidebar_set_repository (ManualsSidebar     *self,
                                                   ManualsRepository  *repository);
void               manuals_sidebar_focus_search   (ManualsSidebar     *self);
void               manuals_sidebar_reveal         (ManualsSidebar     *self,
                                                   ManualsNavigatable *navigatable,
                                                   gboolean            expand);
void               manuals_sidebar_reload         (ManualsSidebar     *self);
void               manuals_sidebar_set_enabled    (ManualsSidebar     *self,
                                                   gboolean            enabled);

G_END_DECLS
