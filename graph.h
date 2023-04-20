#pragma once
#include <iostream>
#define SIZE 10

class Graph {
public:
    Graph();
    // добавление вершины
    void addVertex(std::string vnumber);
    // добавление ребра
    void addEdge(int v1, int v2, int weight);
    void pairSearch();

private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(std::string v);

    int matrix[SIZE][SIZE]; // матрица смежности
    std::string vertexes[SIZE]; // хранилище вершин
    int vertexCount; // количество добавленных вершин
};