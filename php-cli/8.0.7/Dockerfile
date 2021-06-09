# read for more settings https://hub.docker.com/_/php
FROM php:8.0.7-cli-alpine3.13

RUN apk update && apk upgrade \
    && apk add --update composer\
       git \
       shadow \
       libssh-dev \
       openssh-client \
     && rm -rf /var/cache/apk/*

ADD https://github.com/mlocati/docker-php-extension-installer/releases/latest/download/install-php-extensions /usr/local/bin/

RUN chmod +x /usr/local/bin/install-php-extensions && sync \
    && install-php-extensions bcmath pdo_mysql xdebug amqp redis

COPY ./config/php.ini $PHP_INI_DIR/php.ini

WORKDIR /var/www
