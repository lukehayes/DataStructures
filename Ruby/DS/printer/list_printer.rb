module DS::Printer

  class ListPrinter

    def print(list_node)
      print_node(list_node) unless list_node.nil?
    end

    private

    def print_node(list_node)
      puts list_node.class
      puts "List Node Value " + list_node.value.to_s unless list_node.nil?
      print_node(list_node.next_node)
    end

  end
end

