# frozen_string_literal:true

module DS

  # A simple tree implementation.
  #
  # A room can have upto 4 exits (N,S,E,W).
  #
  class Room
    attr_accessor :north_east
    attr_accessor :north_west
    attr_accessor :south_east
    attr_accessor :south_west

    def initialize
      @north_east = nil
      @north_west = nil
      @south_east = nil
      @south_west = nil
    end

    class << self

      def print_tab(depth)
        depth.times do
          print "\t"
        end
        STDOUT.flush
      end

      def print_room(room, depth)

        puts "NW: #{room.north_west}"
        puts "NE: #{room.north_east}"
        puts "SW: #{room.south_west}"
        puts "SE: #{room.south_east}"

        self.print_room(room.north_west, depth + 1)
        self.print_tab(depth+1)

        #print_room(room.north_east, depth + 1)
        #print_room(room.south_west, depth + 1)
        #print_room(room.south_east, depth + 1)

      end

    end
  end
end
