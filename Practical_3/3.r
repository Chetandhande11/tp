# Load the shiny package
library(shiny)

# Define the UI (User Interface)
ui <- fluidPage(
  
  # App title
  titlePanel("Simple Calculator"),
  
  # Sidebar layout with input and output definitions
  sidebarLayout(
    
    # Sidebar panel for input
    sidebarPanel(
      numericInput("num1", "Enter first number:", value = 0),
      numericInput("num2", "Enter second number:", value = 0),
      
      # Dropdown for selecting the operation
      selectInput("operation", "Select operation:",
                  choices = c("Add", "Subtract", "Multiply", "Divide")),
      
      # Button to calculate
      actionButton("calcBtn", "Calculate")
    ),
    
    # Main panel for output
    mainPanel(
      # Text output for displaying result
      textOutput("result")
    )
  )
)

# Define the server logic
server <- function(input, output) {
  
  # Reactive expression to perform the calculation
  result <- eventReactive(input$calcBtn, {
    num1 <- input$num1
    num2 <- input$num2
    operation <- input$operation
    
    # Perform the calculation based on the selected operation
    if (operation == "Add") {
      return(num1 + num2)
    } else if (operation == "Subtract") {
      return(num1 - num2)
    } else if (operation == "Multiply") {
      return(num1 * num2)
    } else if (operation == "Divide") {
      if (num2 == 0) {
        return("Error: Division by zero")
      } else {
        return(num1 / num2)
      }
    }
  })
  
  # Render the result as text
  output$result <- renderText({
    result()
  })
}

# Run the application
shinyApp(ui = ui, server = server)
