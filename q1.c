<html>

<head>
    <script type="text/javascript" src="jquery-3.6.0.js"></script>
    <script type="text/javascript">
        $(document).ready(() => {
            var i = 0;
            var flag = true;
            $('tr').each(function (index) {
                if (i % 2 == 0) {
                    $(this).css('background', 'yellow')
                }
                else {
                    $(this).css('background', 'orange')
                }
                i++;
            });
            $('.move').click(function () {
                if (flag) {
                    $("img").animate({ left: '250px' })
                    $("table").animate({ left: '250px' })
                    flag = false;
                } else {
                    $("img").animate({ left: '0px' })
                    $("table").animate({ left: '0px' })
                    flag = true;
                }
            });
        });
    </script>
</head>

<body>
    <div>
        <table style="border-style:solid;border-width: 2px;position: relative;">
            <tr>
                <td>Sl No.</td>
                <td>Item</td>
                <td>Quantity</td>
            </tr>
            <tr>
                <td>1</td>
                <td>Chocolate</td>
                <td>2kg</td>
            </tr>
            <tr>
                <td>2</td>
                <td>Orange</td>
                <td>1kg</td>
            </tr>
        </table>
        <br>
        <img width="180px" style="position: relative;"
            src="https://hips.hearstapps.com/hmg-prod.s3.amazonaws.com/images/dog-puppy-on-garden-royalty-free-image-1586966191.jpg?crop=1.00xw:0.669xh;0,0.190xh&resize=1200:*" />
        <br>
        <br>
        <button class="move">Click me to move</button>
    </div>
</body>

</html>
