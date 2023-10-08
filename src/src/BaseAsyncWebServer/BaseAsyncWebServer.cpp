#include "BaseAsyncWebServer.h"

  BaseAsyncWebServer::BaseAsyncWebServer()
  {
  }

  BaseAsyncWebServer::~BaseAsyncWebServer() 
  {
  }

  void BaseAsyncWebServer::InitWifiManager(WifiManager * _ptrWifiManager)
  {
    ptrWifiManager = _ptrWifiManager;
  }

  void BaseAsyncWebServer::InitWifiManager()
  {
    ptrWifiManager = new WifiManager();
  }

	void BaseAsyncWebServer::InitAsyncWebServer(AsyncWebServer * _ptrAsyncWebServer)
	{
		ptrAsyncWebServer = _ptrAsyncWebServer;
	}
	
	void BaseAsyncWebServer::InitAsyncWebServer(int port)
	{
		ptrAsyncWebServer = new AsyncWebServer(port);
	}

  void BaseAsyncWebServer::Start()
  {
    ptrAsyncWebServer->begin();
  }

  void BaseAsyncWebServer::Stop()
  {
    ptrAsyncWebServer->end();
  }

  void BaseAsyncWebServer::AddHandlerNotFound()
  {
    ptrAsyncWebServer->onNotFound([](AsyncWebServerRequest *request){  request->send(404);});
  }

  void BaseAsyncWebServer::RemoveHandlerNotFound()
  {
    ptrAsyncWebServer->onNotFound(NULL);
  }

 



  
