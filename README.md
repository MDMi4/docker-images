# Docker-images

Building images and pushing it to registry

* Goto to the folder with `Dockerfile` for example `cd php-cli/7.4.1`
* Build an image `docker build .` and don't forget to copy `IMAGE_ID` after build
* Tag an image `docker tag IMAGE_ID {path_to_your_registry}/php-cli:7.4.1`
* Push image to the registry `docker push {path_to_your_registry}/php-cli:7.4.1`

\* `{path_to_your_registry}` can be your acocount name on dockerHub, or path to your local registry hub

