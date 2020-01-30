/*
   Copyright 2020 Raphael Beck

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifdef __cplusplus
extern "C" {
#endif

#include "l8w8jwt/decode.h"
#include "l8w8jwt/base64.h"
#include "l8w8jwt/retcodes.h"

#include <stdbool.h>
#include <inttypes.h>
#include <mbedtls/pk.h>
#include <mbedtls/md.h>
#include <mbedtls/md_internal.h>
#include <mbedtls/rsa.h>
#include <mbedtls/entropy.h>
#include <mbedtls/ctr_drbg.h>
#include <mbedtls/pk_internal.h>
#include <mbedtls/asn1write.h>

#define L8W8JWT_MAX_KEY_SIZE 8192

int l8w8jwt_validate_decoding_params(struct l8w8jwt_decoding_params* params)
{
    if (params == NULL || params->jwt == NULL || params->verification_key == NULL || (params->out_claims != NULL && params->out_claims_length == NULL))
    {
        return L8W8JWT_NULL_ARG;
    }

    if (params->jwt_length == 0 || params->verification_key_length == 0 || params->verification_key_length > L8W8JWT_MAX_KEY_SIZE)
    {
        return L8W8JWT_INVALID_ARG;
    }

    return L8W8JWT_SUCCESS;
}

int l8w8jwt_decode(struct l8w8jwt_decoding_params* params, enum l8w8jwt_validation_result* out)
{
    // TODO: write decode function!
    return 0;
}

#ifdef __cplusplus
} // extern "C"
#endif
