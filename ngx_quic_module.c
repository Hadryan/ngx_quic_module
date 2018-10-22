#include <ngx_config.h>
#include <ngx_core.h>

static char *ngx_quic_block(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);

static ngx_command_t  ngx_quic_commands[] = {

    { ngx_string("quic"),
      NGX_MAIN_CONF|NGX_CONF_BLOCK|NGX_CONF_NOARGS,
      ngx_quic_block,
      0,
      0,
      NULL },

      ngx_null_command
};

static ngx_core_module_t  ngx_quic_module_ctx = {
    ngx_string("quic"),
    NULL,
    NULL
};

ngx_module_t  ngx_quic_module = {
    NGX_MODULE_V1,
    &ngx_quic_module_ctx,                   /* module context */
    ngx_quic_commands,                      /* module directives */
    NGX_CORE_MODULE,                        /* module type */
    NULL,                                   /* init master */
    NULL,                                   /* init module */
    NULL,                                   /* init process */
    NULL,                                   /* init thread */
    NULL,                                   /* exit thread */
    NULL,                                   /* exit process */
    NULL,                                   /* exit master */
    NGX_MODULE_V1_PADDING
};

static char *ngx_quic_block(ngx_conf_t *cf, ngx_command_t *cmd, void *conf) {
    return "test";
}
