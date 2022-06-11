#ifndef SYSTEM_PLUGIN_API_CHANGE_H
#define SYSTEM_PLUGIN_API_CHANGE_H

#include "context.h"

#include <srpc.h>

int system_change_contact(void *priv, sr_session_ctx_t *session, const srpc_change_ctx_t *change_ctx);
int system_change_hostname(void *priv, sr_session_ctx_t *session, const srpc_change_ctx_t *change_ctx);
int system_change_location(void *priv, sr_session_ctx_t *session, const srpc_change_ctx_t *change_ctx);
int system_change_timezone_name(void *priv, sr_session_ctx_t *session, const srpc_change_ctx_t *change_ctx);

#endif // SYSTEM_PLUGIN_API_CHANGE_H