// Copyright 2022 CSCE 240
//

#ifndef LECTURE9_TEST_INC_TREE_H_
#define LECTURE9_TEST_INC_TREE_H_

#include <lecture9/inc/queue.h>
#include <lecture9/inc/stack.h>
#include <lecture9/inc/tree.h>
#include <cassert>  // assert
#include <cstddef>  // size_t
#include <iostream>
#include <string>


const std::string kMovie_tree[] = {
    "3%", "The 4400", "Altered Carbon", "American Horror Story",
    "American Vandal", "Being Mary Jane", "Better Call Saul",
    "BoJack Horseman", "Breaking Bad", "Cheers", "Chef's Table",
    "The Crown", "Fauda", "Frontier", "GLOW", "The Good Place",
    "Grace and Frankie", "Happy Valley", "Lady Dynamite", "Mad Men",
    "Mindhunter", "Narcos", "Nobel", "The OA", "The Office", "Ozark", "Pose",
    "Riverdale", "Stranger Things", "The Witcher", "You" };

const size_t kTree_size = sizeof(kMovie_tree)/sizeof(std::string);


#endif  // LECTURE9_TEST_INC_TREE_H_
