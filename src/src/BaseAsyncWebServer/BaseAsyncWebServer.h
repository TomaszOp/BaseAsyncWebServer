#ifndef _BaseAsyncWebServer_H_
#define _BaseAsyncWebServer_H_

#include "WifiManager/WifiManager.h"

#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "Tools.h"

#include <ArduinoJson.h>

	static StaticJsonDocument<256> jsonBuffer;
	static char JSONmessageBuffer[1024];

	class BaseAsyncWebServer
	{
		public:
		BaseAsyncWebServer();
		~BaseAsyncWebServer();

		AsyncWebServer * ptrAsyncWebServer;

		void InitWifiManager(WifiManager * _ptrWifiManager);
		void InitWifiManager();

		void InitAsyncWebServer(AsyncWebServer * _ptrAsyncWebServer);
		void InitAsyncWebServer(int port);

		void Start();
		void Stop();
		
		void AddHandlerNotFound();
		void RemoveHandlerNotFound();
		
		char * BaseUrl;

		protected: 

		WifiManager * ptrWifiManager;

		private:

	}; 

#endif
