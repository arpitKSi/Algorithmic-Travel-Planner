# ⚡ Algorithmic Travel Planner (C++ + Dijkstra's Algorithm)
A high-performance travel planning system that computes optimal routes using Dijkstra’s Algorithm, showcasing expertise in graph algorithms, optimization, and computational efficiency—essential for high-frequency trading (HFT) and algorithmic finance.

## 🚀 Features
✅ Shortest Path Optimization – Implements Dijkstra's Algorithm to compute the most efficient travel routes, demonstrating skills in pathfinding and graph traversal.

✅ Cost & Time Optimization – Supports multiple travel preferences (fastest vs. cheapest), similar to trade-off calculations in algorithmic trading.

✅ Graph-Based Decision Making – Models cities and travel routes as a weighted graph, reflecting complex dependency structures in financial markets.

✅ Custom Data Inputs – Reads user-defined city and route data, showcasing file handling and data-driven computation.

✅ Automated Report Generation – Outputs a structured HTML report of computed routes, similar to trade logs and financial analytics.

## 📂 File Structure
Main.cpp – Handles user input, file parsing, and calls graph functions.

GraphFunctions.h/.cpp – Implements Dijkstra’s Algorithm for shortest path computations.

Location.h/.cpp – Defines city properties and relationships.

Route.h/.cpp – Models travel routes as weighted edges in a graph.

FileOperations.h/.cpp – Reads and processes travel data from input files.

OutputGenerator.h/.cpp – Generates structured HTML reports of travel plans.

## 🛠️ Installation & Usage

### **1️⃣ Compile the Code**

```bash
g++ Main.cpp Route.cpp Location.cpp -o planner
```

### **2️⃣ Run the Program**

```bash
./planner
```

## 📌 Example Input Files

📍 **cities.csv**

```
Afghanistan	Kabul	34.4667	69.1833
Albania	Tirane	41.3	19.8167
Algeria	Algiers	36.7	3.13333
American Samoa	Pago Pago	-14.2667	-170.717
...
```

📍 **routes.csv**

```
Abu Dhabi,Canberra (Use Sydney),plane,24,1339,"Qatar Airways, Thai Airways, Jetstar Airways, 2 stops, Momondo.com"
Abu Dhabi,Lima,plane,30,1967,"KLM Airways, 1 stop, Momondo.com"
Abu Dhabi,London,plane,10,666,"Turkish Airlines, 1 stop, Momondo.com"
...
```

## 🖥️ Output

Provide an **ouput.html**, file and you will get all the listing the with your desired conditions.

## 📜 License

This project is open-source and available under the **MIT License**.
