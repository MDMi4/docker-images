# read for more settings https://hub.docker.com/_/php
FROM php:7.4.33-apache

USER root

RUN ln -s /etc/apache2/mods-available/rewrite.load /etc/apache2/mods-enabled/

RUN pecl install redis-5.1.1 \
	&& pecl install xdebug-3.1.6 \
	&& docker-php-ext-enable redis 


# RUN docker-php-source extract \
# 	# do important things \
# 	&& docker-php-source delete    

RUN apt-get update && apt-get install -y \
		libfreetype6-dev \
		libjpeg62-turbo-dev \
		libpng-dev \
		libwebp-dev \
        libzip-dev \
	&& docker-php-ext-configure gd --with-freetype --with-jpeg --with-webp \
	&& docker-php-ext-install -j$(nproc) gd zip pdo_mysql mysqli


#  access_compat.load
#  actions.conf
#  actions.load
#  alias.conf
#  alias.load
#  allowmethods.load
#  asis.load
#  auth_basic.load
#  auth_digest.load
#  auth_form.load
#  authn_anon.load
#  authn_core.load
#  authn_dbd.load
#  authn_dbm.load
#  authn_file.load
#  authn_socache.load
#  authnz_fcgi.load
#  authnz_ldap.load
#  authz_core.load
#  authz_dbd.load
#  authz_dbm.load
#  authz_groupfile.load
#  authz_host.load
#  authz_owner.load
#  authz_user.load
#  autoindex.conf
#  autoindex.load
#  brotli.load
#  buffer.load
#  cache.load
#  cache_disk.conf
#  cache_disk.load
#  cache_socache.load
#  cern_meta.load
#  cgi.load
#  cgid.conf
#  cgid.load
#  charset_lite.load
#  data.load
#  dav.load
#  dav_fs.conf
#  dav_fs.load
#  dav_lock.load
#  dbd.load
#  deflate.conf
#  deflate.load
#  dialup.load
#  dir.conf
#  dir.load
#  dump_io.load
#  echo.load
#  env.load
#  expires.load
#  ext_filter.load
#  file_cache.load
#  filter.load
#  headers.load
#  heartbeat.load
#  heartmonitor.load
#  http2.conf
#  http2.load
#  ident.load
#  imagemap.load
#  include.load
#  info.conf
#  info.load
#  lbmethod_bybusyness.load
#  lbmethod_byrequests.load
#  lbmethod_bytraffic.load
#  lbmethod_heartbeat.load
#  ldap.conf
#  ldap.load
#  log_debug.load
#  log_forensic.load
#  lua.load
#  macro.load
#  md.load
#  mime.conf
#  mime.load
#  mime_magic.conf
#  mime_magic.load
#  mpm_event.conf
#  mpm_event.load
#  mpm_prefork.conf
#  mpm_prefork.load
#  mpm_worker.conf
#  mpm_worker.load
#  negotiation.conf
#  negotiation.load
#  php7.load
#  proxy.conf
#  proxy.load
#  proxy_ajp.load
#  proxy_balancer.conf
#  proxy_balancer.load
#  proxy_connect.load
#  proxy_express.load
#  proxy_fcgi.load
#  proxy_fdpass.load
#  proxy_ftp.conf
#  proxy_ftp.load
#  proxy_hcheck.load
#  proxy_html.conf
#  proxy_html.load
#  proxy_http.load
#  proxy_http2.load
#  proxy_scgi.load
#  proxy_uwsgi.load
#  proxy_wstunnel.load
#  ratelimit.load
#  reflector.load
#  remoteip.load
#  reqtimeout.conf
#  reqtimeout.load
#  request.load
#  rewrite.load
#  sed.load
#  session.load
#  session_cookie.load
#  session_crypto.load
#  session_dbd.load
#  setenvif.conf
#  setenvif.load
#  slotmem_plain.load
#  slotmem_shm.load
#  socache_dbm.load
#  socache_memcache.load
#  socache_redis.load
#  socache_shmcb.load
#  speling.load
#  ssl.conf
#  ssl.load
#  status.conf
#  status.load
#  substitute.load
#  suexec.load
#  unique_id.load
#  userdir.conf
#  userdir.load
#  usertrack.load
#  vhost_alias.load
#  xml2enc.load