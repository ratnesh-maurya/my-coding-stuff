#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPServerParams.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/Net/ServerSocket.h>
#include <Poco/Util/ServerApplication.h>

#include <iostream>

using namespace Poco::Net;
using namespace Poco::Util;
using namespace std;

class Task
{
public:
  string task;
  bool is_completed;
  string end_date;
};

class TaskHandler: public HTTPRequestHandler
{
public:
  virtual void handleRequest(HTTPServerRequest& request, HTTPServerResponse& response)
  {
    response.setChunkedTransferEncoding(true);
    response.setContentType("application/json");

    // Implement CRUD operations
  }
};

class TaskRequestHandlerFactory: public HTTPRequestHandlerFactory
{
public:
  virtual HTTPRequestHandler* createRequestHandler(const HTTPServerRequest& request)
  {
    return new TaskHandler;
  }
};

class TodoServer: public ServerApplication
{
protected:
  int main(const vector<string>& args)
  {
    HTTPServer svr(new TaskRequestHandlerFactory, ServerSocket(8080), new HTTPServerParams);
    svr.start();
    waitForTerminationRequest();
    svr.stop();
    return Application::EXIT_OK;
  }
};

int main(int argc, char** argv)
{
  TodoServer app;
  return app.run(argc, argv);
}
