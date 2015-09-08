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

#ifndef __APPFW_ENV_H__
#define __APPFW_ENV_H__
/**
 * @file appfw_env.h
 * @version 0.1
 * @brief    This file declares API of appfw_env
 * @addtogroup		APPLICATION_FRAMEWORK
 * @{
 *
 * @section		Header Header file to include:
 * @code
 * #include		<appfw_env.h>
 * @endcode
 *
 * @}
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief	Returns the read-only path for the applications such as /usr/apps/.
 * @remarks The returned path must not be released with free().
 *
 * @return	The read-only specific path for the applications.
*/
const char *appfw_env_get_apps_readonly_path(void);

/**
 * @brief	Returns the writable path for the applications such as /opt/usr/apps/.
 * @remarks The returned path must not be released with free().
 *
 * @return	The writable specific path for the applications.
*/
const char *appfw_env_get_apps_path(void);

/**
 * @brief	Returns the external path for the applications such as /opt/storage/sdcard/apps/.
 * @remarks The returned path must not be released with free().
 *
 * @return	The external specific path for the applications.
*/
const char *appfw_env_get_apps_external_path(void);

/**
 * @brief	Returns the external storage path such as /opt/storage/sdcard/.
 * @remarks The returned path must not be released with free().
 *
 * @return	The external storage path.
*/
const char *appfw_env_get_external_storage_path(void);

/**
 * @brief	Returns the media path such as /opt/usr/media/.
 * @remarks The returned path must not be released with free().
 *
 * @return	The media path.
*/
const char *appfw_env_get_media_path(void);

#ifdef __cplusplus
}
#endif

#endif  /* __APPFW_ENV_H__ */
