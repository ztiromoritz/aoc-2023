cjkkjonst std = @import("std");
pub fn main() !void {
    const file = try std.fs.cwd().openFile("001-1.txt", .{});
    defer file.close();
    var buf_reader = std.io.bufferedReader(file.reader());
    var in_stream = buf_reader.reader();
    var buf: [1024]u8 = undefined;
    var sum: u32 = 0;
    while (try in_stream.readUntilDelimiterOrEof(&buf, '\n')) |line| {
        //std.debug.print("{s} {d}\n", .{ line, line.len });
        var first: u8 = 'x';
        var last: u8 = 'x';
        for (line) |c| {
            if (c >= '0' and c <= '9') {
                last = c;
                if (first == 'x') {
                    first = c;
                }
            }
            //std.debug.print("{c} \n", .{c});
        }
        sum += last - '0';
        sum += (first - '0') * 10;
    }
    std.debug.print("{d} \n", .{sum});
}
