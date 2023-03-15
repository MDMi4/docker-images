# read for more settings https://hub.docker.com/_/php
FROM php:8.2.3-cli-alpine3.17

RUN apk update && apk upgrade \
    && apk add --update composer\
       git \
       shadow \
       libssh-dev \
       openssh-client 
       
RUN apk update && apk upgrade \
    && apk add --update composer\
       git \
       shadow \
       libssh-dev \
       openssh-client

ADD https://github.com/mlocati/docker-php-extension-installer/releases/latest/download/install-php-extensions /usr/local/bin/

RUN chmod +x /usr/local/bin/install-php-extensions && sync \
    && install-php-extensions bcmath pdo_mysql xdebug amqp redis

# RUN apk add --update --no-cache --virtual .build-deps \
#        autoconf \
#        g++ \
#        gcc \
#        gnupg \
#        libgcc \
#        make \
#        alpine-sdk \       
#        rabbitmq-c-dev \
#     && docker-php-ext-install -j$(nproc) bcmath pdo_mysql mysqli \
#     && pecl install amqp \
#     && pecl install redis \
#     && pecl install xdebug \
#     && docker-php-ext-enable amqp redis \
#     && apk del .build-deps \
#     && rm -rf /var/cache/apk/*

# COPY ./config/xdebug.ini $PHP_INI_DIR/conf.d/
COPY ./config/php.ini $PHP_INI_DIR/php.ini

WORKDIR /var/www

WORKDIR /var/www
