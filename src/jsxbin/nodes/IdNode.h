#pragma once

#include "AstNode.h"
#include "../decoders.h"

using namespace jsxbin;

namespace jsxbin { namespace nodes {
    class IdNode : public AstNode {
    public:
        explicit IdNode(Reader& reader) : AstNode(reader) {}

        void parse() override;

        string to_string() override;

    private:
        string id;
        bool unknown = false;
    };
} }
