#include "Tools.h"

  extern char* CreateUrl(char * baseUrl, const char * _url)
  {
    if(baseUrl == NULL)
      return (char* )_url;


    char * urlApi = (char*) malloc(sizeof(char) * (strlen(baseUrl) + strlen(_url) + 1));

    strcpy(urlApi, baseUrl);
    urlApi = strcat(urlApi , _url);

    return urlApi;
  }

