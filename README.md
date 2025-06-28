# ⚡ Algorithmic Travel Planner

A high-performance travel planning system that computes optimal routes between cities using Dijkstra’s Algorithm. This project demonstrates advanced use of graph algorithms, optimization techniques, and computational efficiency—skills that are essential for domains like high-frequency trading and algorithmic finance.

---

## 🚀 Features

- **Shortest Path Optimization**: Implements Dijkstra's Algorithm to compute the most efficient travel routes between cities.
- **Cost & Time Optimization**: Allows users to choose between the fastest or cheapest routes, reflecting trade-off calculations similar to those in algorithmic trading.
- **Graph-Based Decision Making**: Models cities and travel connections as a weighted graph, mirroring complex dependency structures found in financial or transportation networks.
- **Custom Data Inputs**: Reads user-defined city and route data from CSV files, enabling flexible, data-driven computation.
- **Automated HTML Report Generation**: Outputs structured HTML reports visualizing computed routes, similar to trade logs and financial analytics dashboards.

---

## 🛠️ Installation & Usage

### **1️⃣ Compile the Code**

Make sure you have `g++` and a C++11-compatible compiler installed.

```bash
g++ Main.cpp Route.cpp Location.cpp -o planner
```

### **2️⃣ Prepare Input Files**

You will need two CSV files:
- **Cities File**: Contains country, city, latitude, longitude (one per line, comma-separated).
- **Routes File**: Contains origin city, destination city, transport type (e.g., plane, train), travel time, cost, and any notes (comma-separated).

Example (cities.csv):
```
Italy,Rome,41.9028,12.4964
Kazakhstan,Astana,51.1694,71.4491
...
```

Example (routes.csv):
```
Rome,Astana,plane,6.5,500,Direct flight
Rome,Paris,train,12,120,Overnight
...
```

### **3️⃣ Run the Program**

You can run the program with or without command-line arguments:

```bash
./planner [cities_file] [routes_file] [output_file.html] [origin_city] [destination_city] [preference]
```

If you omit arguments, the program will prompt you for them interactively.

- **cities_file**: Path to your cities CSV file.
- **routes_file**: Path to your routes CSV file.
- **output_file.html**: Path for the generated HTML report.
- **origin_city**: Name of the starting city.
- **destination_city**: Name of the destination city.
- **preference**: `fastest` or `cheapest`.

---

## 📂 File Structure

- **Main.cpp** – Handles user input, file parsing, and orchestrates the route computation and report generation.
- **GraphFunctions.h / GraphFunctions.cpp** – Implements Dijkstra’s Algorithm and graph operations.
- **Location.h / Location.cpp** – Defines city properties and relationships.
- **Route.h / Route.cpp** – Models travel routes as weighted edges in a graph.
- **FileOperations.h / FileOperations.cpp** – Reads and processes travel data from input files and generates HTML reports.
- **Parser.h** – Additional parsing logic for input files.

---

## 📌 Example Input Files

**cities.csv**
```
Country,City,Latitude,Longitude
Italy,Rome,41.9028,12.4964
France,Paris,48.8566,2.3522
Kazakhstan,Astana,51.1694,71.4491
```

**routes.csv**
```
Origin,Destination,Type,Time,Cost,Note
Rome,Paris,train,12,120,Overnight
Paris,Astana,plane,6.5,500,Direct flight
Rome,Astana,plane,7,600,One-stop
```

---

## 🖥️ Output

- The program generates an HTML file displaying the computed optimal route(s) on a Google Map.
- Each segment displays details such as mode of transport, duration, and cost.
- Clickable paths and markers provide interactive feedback.

---

## 📜 License

This project is open-source and available under the **MIT License**.

---
