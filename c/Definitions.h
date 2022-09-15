// days of the week
#define SUNDAY 0
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6

// months of the year
#define JANUARY 1
#define FEBRUARY 2
#define MARCH 3
#define APRIL 4
#define MAY 5
#define JUNE 6
#define JULY 7
#define AUGUST 8
#define SEPTEMBER 9
#define OCTOBER 10
#define NOVEMBER 11
#define DECEMBER 12


// string with the the days of the week
const char* dayNames[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};

// string with the days of the week in spanish
const char* dayNamesSpanish[] = {
    "Domingo",
    "Lunes",
    "Martes",
    "Miércoles",
    "Jueves",
    "Viernes",
    "Sábado"
};

// HTTP status codes
#define HTTP_OK 200
#define HTTP_CREATED 201
#define HTTP_ACCEPTED 202
#define HTTP_NO_CONTENT 204
#define HTTP_BAD_REQUEST 400
#define HTTP_UNAUTHORIZED 401
#define HTTP_FORBIDDEN 403
#define HTTP_NOT_FOUND 404
#define HTTP_NOT_ALLOWED 405
#define HTTP_NOT_ACCEPTABLE 406
#define HTTP_PRECONDITION_FAILED 412
#define HTTP_INTERNAL_SERVER_ERROR 500
#define HTTP_NOT_IMPLEMENTED 501
#define HTTP_BAD_GATEWAY 502
#define HTTP_SERVICE_UNAVAILABLE 503
#define HTTP_GATEWAY_TIMEOUT 504

// HTTP header fields
#define HTTP_CONTENT_TYPE "Content-Type"
#define HTTP_CONTENT_LENGTH "Content-Length"
#define HTTP_CONTENT_ENCODING "Content-Encoding"
#define HTTP_CONNECTION "Connection"
#define HTTP_LOCATION "Location"
#define HTTP_SERVER "Server"
#define HTTP_LAST_MODIFIED "Last-Modified"
#define HTTP_IF_MODIFIED_SINCE "If-Modified-Since"
#define HTTP_IF_NONE_MATCH "If-None-Match"
#define HTTP_ETAG "ETag"
#define HTTP_ACCEPT "Accept"
#define HTTP_ACCEPT_ENCODING "Accept-Encoding"
#define HTTP_ACCEPT_LANGUAGE "Accept-Language"
#define HTTP_HOST "Host"
#define HTTP_USER_AGENT "User-Agent"
#define HTTP_COOKIE "Cookie"

// HTTP header field values
#define HTTP_KEEP_ALIVE "keep-alive"
#define HTTP_CLOSE "close"
#define HTTP_CHUNKED "chunked"
#define HTTP_GZIP "gzip"
#define HTTP_DEFLATE "deflate"
#define HTTP_IDENTITY "identity"
#define HTTP_TEXT_HTML "text/html"
#define HTTP_TEXT_PLAIN "text/plain"
#define HTTP_TEXT_CSS "text/css"
#define HTTP_TEXT_XML "text/xml"
#define HTTP_APPLICATION_XML "application/xml"
#define HTTP_APPLICATION_XHTML_XML "application/xhtml+xml"
#define HTTP_APPLICATION_ATOM_XML "application/atom+xml"
#define HTTP_APPLICATION_JSON "application/json"
#define HTTP_APPLICATION_JAVASCRIPT "application/javascript"
#define HTTP_APPLICATION_OCTET_STREAM "application/octet-stream"
#define HTTP_APPLICATION_RSS_XML "application/rss+xml"
#define HTTP_APPLICATION_FORM_URLENCODED "application/x-www-form-urlencoded"
#define HTTP_MULTIPART_FORM_DATA "multipart/form-data"
#define HTTP_IMAGE_PNG "image/png"
#define HTTP_IMAGE_JPEG "image/jpeg"
#define HTTP_IMAGE_GIF "image/gif"
#define HTTP_IMAGE_SVG_XML "image/svg+xml"
#define HTTP_IMAGE_TIFF "image/tiff"
#define HTTP_IMAGE_ICON "image/x-icon"
#define HTTP_IMAGE_WEBP