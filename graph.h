#pragma once
#include <iostream>
#define SIZE 10

class Graph {
public:
    Graph();
    // ���������� �������
    void addVertex(std::string vnumber);
    // ���������� �����
    void addEdge(int v1, int v2, int weight);
    void pairSearch();

private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(std::string v);

    int matrix[SIZE][SIZE]; // ������� ���������
    std::string vertexes[SIZE]; // ��������� ������
    int vertexCount; // ���������� ����������� ������
};