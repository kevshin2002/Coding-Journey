//
//  View.hpp
//
//  Created by rick gessner on 3/30/23.
//  Copyright © 2018-2023 rick gessner. All rights reserved.
// 
//  This code was taken from ECE 141B and used for the View for Leetcode.


#ifndef View_hpp
#define View_hpp

#include <iostream>
#include <functional>
#include <sstream>
#include <map>

namespace Leetcode {
    class View {
    public:
        virtual         ~View() {}
        virtual bool    show(std::ostream& aStream) = 0;
    };

    using ViewListener = std::function<void(View& aView)>;
}

#endif /* View_h */
