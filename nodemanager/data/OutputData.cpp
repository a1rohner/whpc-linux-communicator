#include "OutputData.h"

json::value OutputData::ToJson() const
{
    json::value j;
    j["NodeName"] = json::value::string(this->NodeName);
    j["Order"] = this->Order;
    j["Content"] = json::value::string(this->Content);

    return std::move(j);
}
