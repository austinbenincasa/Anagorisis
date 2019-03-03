#include <string>
#include "spdlog/spdlog.h"
#include "record_mgr.hpp"
#include <pistache/http.h>
#include <pistache/router.h>
using Pistache::Http::ResponseWriter;
using Pistache::Rest::Request;
using Pistache::Http::Header::ContentType;

class RetrieveEndpoint {
    public:
        RetrieveEndpoint(std::shared_ptr<spdlog::logger>, RecordManager*);
        ~RetrieveEndpoint();
        void handle(const Request&, ResponseWriter);
    private:
        std::shared_ptr<spdlog::logger> logger;
        RecordManager* record_mgr;
};