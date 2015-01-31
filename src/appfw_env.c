/*
 * appfw-env
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <string.h>
#include "appfw_env.h"

#define API __attribute__ ((visibility("default")))

API const char *appfw_env_get_apps_readonly_path(void)
{
	static const char apps_readonly_path[] = "/usr/apps/";
	return apps_readonly_path;
}

API const char *appfw_env_get_apps_path(void)
{
	static const char apps_path[] = "/opt/usr/apps/";
	return apps_path;
}

API const char *appfw_env_get_apps_external_path(void)
{
	static const char apps_external_path[] = "/opt/storage/sdcard/apps/";
	return apps_external_path;
}

API const char *appfw_env_get_external_storage_path(void)
{
	static const char external_storage_path[] = "/opt/storage/sdcard/";
	return external_storage_path;
}

API const char *appfw_env_get_media_path(void)
{
	static const char media_path[] = "/opt/usr/media/";
	return media_path;
}
