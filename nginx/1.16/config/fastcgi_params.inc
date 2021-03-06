fastcgi_pass                      fastcgi_backend;
#fastcgi_split_path_info          ^(.+\.php)(/.*)$;
fastcgi_buffers                   16 16k;
fastcgi_buffer_size               32k;
fastcgi_read_timeout              600s;
fastcgi_connect_timeout           600s;

fastcgi_index  index.php;
fastcgi_param  SCRIPT_FILENAME    $realpath_root$fastcgi_script_name;
fastcgi_param  DOCUMENT_ROOT      $realpath_root;
fastcgi_param  SCRIPT_NAME        $fastcgi_script_name;
fastcgi_param  PHP_VALUE          "error_log=/var/log/nginx/application_php_errors.log";

fastcgi_param  QUERY_STRING       $query_string;
fastcgi_param  REQUEST_METHOD     $request_method;
fastcgi_param  CONTENT_TYPE       $content_type;
fastcgi_param  CONTENT_LENGTH     $content_length;

fastcgi_param  REQUEST_URI        $request_uri;
fastcgi_param  DOCUMENT_URI       $document_uri;
fastcgi_param  DOCUMENT_ROOT      $document_root;
fastcgi_param  SERVER_PROTOCOL    $server_protocol;
fastcgi_param  REQUEST_SCHEME     $scheme;
fastcgi_param  HTTPS              $https if_not_empty;

fastcgi_param  GATEWAY_INTERFACE  CGI/1.1;
fastcgi_param  SERVER_SOFTWARE    nginx/$nginx_version;

fastcgi_param  REMOTE_ADDR        $remote_addr;
fastcgi_param  REMOTE_PORT        $remote_port;
fastcgi_param  SERVER_ADDR        $server_addr;
fastcgi_param  SERVER_PORT        $server_port;
fastcgi_param  SERVER_NAME        $server_name;

# PHP only, required if PHP was built with --enable-force-cgi-redirect
fastcgi_param  REDIRECT_STATUS    200;

set $x_request_id $http_x_request_id;

if ($x_request_id = "") {
    set $x_request_id $request_id;
}

fastcgi_param HTTP_X_REQUEST_ID $x_request_id;
