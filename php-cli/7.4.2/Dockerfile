# read for more settings https://hub.docker.com/_/php
FROM php:7.4.2-cli-alpine3.11

RUN apk update && apk upgrade \
    && apk add --update composer\
       git \
       shadow \
       libssh-dev \
       openssh-client \
       rabbitmq-c-dev \
    && apk add --update --no-cache --virtual .build-deps \
       autoconf \
       g++ \
       gcc \
       gnupg \
       libgcc \
       make \
       alpine-sdk \
       python \
    && docker-php-ext-install -j$(nproc) bcmath pdo_mysql mysqli \
    && pecl install amqp \
    && pecl install redis \
    && pecl install xdebug \
    && docker-php-ext-enable amqp redis \
    && apk del .build-deps \
    && rm -rf /var/cache/apk/*

# COPY ./config/xdebug.ini $PHP_INI_DIR/conf.d/
COPY ./config/php.ini $PHP_INI_DIR/php.ini

WORKDIR /var/www
