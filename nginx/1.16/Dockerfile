FROM nginx:1.16-alpine

COPY ./config/nginx.conf /etc/nginx/nginx.conf
COPY ./config/application.conf /etc/nginx/conf.d/application.conf
COPY ./config/upstreams.conf /etc/nginx/conf.d/upstreams.conf
COPY ./config/fastcgi_params.inc /etc/nginx/custom.d/fastcgi_params.inc

