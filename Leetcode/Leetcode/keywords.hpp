/*
* Router.hpp
*
* Coded by Kevin Shin
*
*/

#ifndef keywords_hpp
#define keywords_hpp

namespace Leetcode {
    enum Keywords {
        // Selection
        One = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,

        // Options
        Initial, Previous, Next, Exit,

        // Errors
        unknown
    };

	enum Identifier {
		TwoSum = 1, AddTwoNumbers, LongestSubStringWithoutRepeatingCharacters
	};

    enum Difficulty {
        Easy, Medium, Hard
    };

    enum DataType {
        Array, String, HashTable, Tree, Matrix, BinaryTree, Heap_PriorityQueue, Stack,
        Graph, LinkedList, OrderedSet, Queue, BinaryIndexedTree, Iterator, Doubly_LinkedList
    };

    enum Algorithm {
        DynamicProgramming, Math, Sorting, Greedy, Depth_FirstSearch, Binary_Search, Database,
        Breadth_FirstSearch, TwoPointers, BitManipulation, PrefixSum, Simulation, Design, Counting,
        SlidingWindow, Backtracking, UnionFind, Enumeration, MonotonicStack, Trie, NumberTheory,
        DivideAndConquer, Recursion, Bitmask, BinarySearchTree, SegmentTree, Memoization, Geometry,
        TopologicalSort, Combinatorics, GameTheory, HashFunction, ShortestPath, Interactive,
        StringMatching, DataStream, RollingHash, Brainteaser, MonotonicQueue, Randomized,
        MergeSort, Concurrency, Probability_Statistics, Quickselect, BucketSort, SuffixArray,
        MinimumSpanningTree, CountingSort, Shell, LineSweep, ReservoirSampling, StrnoglyConnectedComponent,
        EulerianCircuit, RadixSort, RejectionSampling, BiconnectedComponent
    };


}

#endif // keywords.hpp