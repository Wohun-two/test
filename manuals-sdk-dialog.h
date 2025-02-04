/*
 * manuals-sdk-dialog.h
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

#include <adwaita.h>

#include "manuals-sdk-installer.h"

G_BEGIN_DECLS

#define MANUALS_TYPE_SDK_DIALOG (manuals_sdk_dialog_get_type())

G_DECLARE_FINAL_TYPE (ManualsSdkDialog, manuals_sdk_dialog, MANUALS, SDK_DIALOG, AdwPreferencesDialog)

ManualsSdkDialog *manuals_sdk_dialog_new           (void);
void              manuals_sdk_dialog_add_installer (ManualsSdkDialog    *self,
                                                    ManualsSdkInstaller *installer);
void              manuals_sdk_dialog_present       (ManualsSdkDialog    *self,
                                                    GtkWidget           *parent);

G_END_DECLS
