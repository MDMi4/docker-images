# read for more settings https://hub.docker.com/_/php
FROM php:7.4.1-fpm-alpine3.11

RUN apk update && apk upgrade \
    && apk add --update composer\
       git \
       shadow\
       libssh-dev \
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
    && docker-php-ext-install -j$(nproc) bcmath \
    && docker-php-ext-install -j$(nproc) pdo_mysql \
    && docker-php-ext-install -j$(nproc) mysqli \
    && pecl install amqp \
    && pecl install redis \
    && pecl install xdebug \
    && docker-php-ext-enable amqp redis \
    && apk del .build-deps \
    && rm -rf /var/cache/apk/*

# COPY ./config/xdebug.ini $PHP_INI_DIR/conf.d/
COPY ./config/www.pool.conf $PHP_INI_DIR/conf.d/
COPY ./config/php-fpm.conf $PHP_INI_DIR/conf.d/
COPY ./config/php.ini $PHP_INI_DIR/php.ini

WORKDIR /var/www
