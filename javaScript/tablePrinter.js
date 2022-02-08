function printLine(count) {
  let temp = "";
  for (let index = 0; index <= count; index++) {
    temp = temp + "-";
  }
  console.log(temp);
}

function printTable(colNames, data, printRow) {
  let columnNames = "";

  for (let index = 0; index < colNames.length; index++) {
    columnNames = columnNames + " | " + colNames[index].label + " | ";
  }


  // Table heading
  printLine(columnNames.length);
  console.log(columnNames);
  printLine(columnNames.length);

  for (let row = 0; row < data.length; row++) {
    const rowData = data[row];
    printRow(rowData);
  }

  printLine(columnNames.length);
}

const colNames = [
  { label: "Event Date", key: "date" },
  { label: "Event Name", key: "name" },
  { label: "Total Tickets Sold", key: "totalTicketsSold" },
  { label: "Total Revenue", key: "totalRevenue" },
  { label: "Status", key: "status" },
  { label: "Action", key: "date" },
];

const data = [
  {
    date: "27-09-2021",
    name: "Lorem Ipsum has been1",
    totalTicketsSold: 5201,
    totalRevenue: 120001,
    status: "Active1",
  },
  {
    date: "27-09-2021",
    name: "Lorem Ipsum has been2",
    totalTicketsSold: 5202,
    totalRevenue: 120002,
    status: "Active2",
  },
  {
    date: "27-09-2021",
    name: "Lorem Ipsum has been3",
    totalTicketsSold: 5203,
    totalRevenue: 120003,
    status: "Active3",
  },
  {
    date: "27-09-2021",
    name: "Lorem Ipsum has been4",
    totalTicketsSold: 5204,
    totalRevenue: 120004,
    status: "Creating4",
  },
];

printTable(colNames, data, (rowData) => {
  let details = "";
  details = details + " | " + rowData.date + " | ";
  details = details + " | " + rowData.name + " | ";
  details = details + " | " + rowData.totalTicketsSold + " | ";
  details = details + " | " + rowData.totalRevenue + " | ";
  details = details + " | " + rowData.status + " | ";
  console.log(details, "\n");
});
